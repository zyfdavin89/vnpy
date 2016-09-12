/////////////////////////////////////////////////////////////////////////
///@author ��̩֤ȯ�ɷ����޹�˾
///@file xtp_quote_api.h
///@brief �������鶩�Ŀͻ��˽ӿ�
/////////////////////////////////////////////////////////////////////////

#ifndef _XTP_QUOTE_API_H_
#define _XTP_QUOTE_API_H_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "xtp_api_struct.h"

#if defined(ISLIB) && defined(WIN32)
#ifdef LIB_MD_API_EXPORT
#define MD_API_EXPORT __declspec(dllexport)
#else
#define MD_API_EXPORT __declspec(dllimport)
#endif
#else
#define MD_API_EXPORT 
#endif

/*!
* \class XTP::API::QuoteSpi
*
* \brief ����ص���
*
* \author ��̩֤ȯ�ɷ����޹�˾
* \date ʮ�� 2015
*/
namespace XTP {
	namespace API {
		class QuoteSpi
		{
		public:

			///���ͻ����뽻�׺�̨ͨ�����ӶϿ�ʱ���÷��������á�
			///@remark ������������δ֧��
			///@param reason ����ԭ��
			virtual void OnDisconnected(int reason) {};


			///����Ӧ��
			///@param error_info ������Ϣ
			virtual void OnError(XTPRI *error_info) {};

			///��������Ӧ��
			///@param ticker ��ϸ�ĺ�Լ�������
			///@param error_info ���ĺ�Լ��������ʱ�Ĵ�����Ϣ
			///@param is_last �Ƿ�˴ζ��ĵ����һ��Ӧ��
			///@remark ÿ�����ĵĺ�Լ����Ӧһ������Ӧ��
			virtual void OnSubMarketData(XTPST *ticker, XTPRI *error_info, bool is_last) {};

			///ȡ����������Ӧ��
			///@param ticker ��ϸ�ĺ�Լȡ���������
			///@param error_info ������Ϣ
			///@param is_last �Ƿ�˴�ȡ�����ĵ����һ��Ӧ��
			///@remark ÿ��ȡ�����ĵĺ�Լ����Ӧһ��ȡ������Ӧ��
			virtual void OnUnSubMarketData(XTPST *ticker, XTPRI *error_info, bool is_last) {};

			///����֪ͨ
			///@param market_data ��������
			virtual void OnMarketData(XTPMD *market_data) {};


			///��ѯ�ɽ��׺�ԼӦ��
			///@remark �����������˺�����δ֧��
			virtual void OnQueryAllTickers() {};
		};
	}
}


/*!
* \class XTP::API::QuoteApi
*
* \brief ���鶩�Ľӿ���
*
* \author ��̩֤ȯ�ɷ����޹�˾
* \date ʮ�� 2015
*/
namespace XTP {
	namespace API {
		class MD_API_EXPORT QuoteApi
		{
		public:
			///����QuoteApi
			///@param save_file_path �������ֶΣ�����������Ϣ�ļ���Ŀ¼��Ĭ��Ϊ��ǰĿ¼
			///@return ��������UserApi
			static QuoteApi *CreateQuoteApi(const char *save_file_path = "");

			///ɾ���ӿڶ�����
			///@remark ����ʹ�ñ��ӿڶ���ʱ,���øú���ɾ���ӿڶ���
			virtual void Release() = 0;


			///��ȡ��ǰ������
			///@return ��ȡ���Ľ�����
			///@remark ֻ�е�¼�ɹ���,���ܵõ���ȷ�Ľ�����
			virtual const char *GetTradingDay() = 0;


			///ע��ص��ӿ�
			///@param spi �����Իص��ӿ����ʵ��
			virtual void RegisterSpi(QuoteSpi *spi) = 0;

			///�������顣
			///@return ���Ľӿڵ����Ƿ�ɹ�����0����ʾ�ӿڵ��óɹ����ǡ�0����ʾ�ӿڵ��ó���
			///@param ticker ��ԼID����  
			///@param count Ҫ����/�˶�����ĺ�Լ����
			///@param exchage_id ����������
			///@remark ����һ���Զ���ͬһ֤ȯ�������Ķ����Լ
			virtual int SubscribeMarketData(char *ticker[], int count, XTP_EXCHANGE_TYPE exchage_id) = 0;

			///�˶����顣
			///@return ȡ�����Ľӿڵ����Ƿ�ɹ�����0����ʾ�ӿڵ��óɹ����ǡ�0����ʾ�ӿڵ��ó���
			///@param ticker ��ԼID����  
			///@param count Ҫ����/�˶�����ĺ�Լ����
			///@param exchage_id ����������
			///@remark ����һ����ȡ������ͬһ֤ȯ�������Ķ����Լ
			virtual int UnSubscribeMarketData(char *ticker[], int count, XTP_EXCHANGE_TYPE exchage_id) = 0;

			///�û���¼����
			///@return ��¼�Ƿ�ɹ�����0����ʾ��¼�ɹ�����-1����ʾ���ӷ�����������-2����ʾ�Ѵ������ӣ��������ظ���¼�������Ҫ����������logout����-3����ʾ�����д���
			///@param ip ��������ַ
			///@param port �������˿ں�
			///@param user ��½�û���
			///@param password ��½����
			///@param sock_type ��1������TCP����2������UDP��Ŀǰ��ʱֻ֧��TCP
			///@remark �˺���Ϊͬ������ʽ������Ҫ�첽�ȴ���¼�ɹ������������ؼ��ɽ��к�������
			virtual int Login(const char* ip, int port, const char* user, const char* password, XTP_PROTOCOL_TYPE sock_type) = 0;


			///�ǳ�����
			///@return �ǳ��Ƿ�ɹ�����0����ʾ�ǳ��ɹ����ǡ�0����ʾ�ǳ�����
			///@remark �˺���Ϊͬ������ʽ������Ҫ�첽�ȴ��ǳ������������ؼ��ɽ��к�������
			virtual int Logout() = 0;

			///��ȡ��ǰ�����տɽ��׺�Լ
			///@return ��ѯ�Ƿ�ɹ�����0����ʾ��ѯ�ɹ����ǡ�0����ʾ��ѯ���ɹ�
			///@param exchage_id ����������
			///@remark �˺�����δ֧��
			virtual int QueryAllTickers(XTP_EXCHANGE_TYPE exchage_id) = 0;


		protected:
			~QuoteApi() {};
		};
	}
}




#endif
