/////////////////////////////////////////////////////////////////////////
///@author ��̩֤ȯ�ɷ����޹�˾
///@file xtp_quote_api_compatible.h
///@brief �������鶩�Ŀͻ��˼��ݽӿ�
/////////////////////////////////////////////////////////////////////////

#ifndef _XTP_QUOTE_API_COMPATIBLE_H_
#define _XTP_QUOTE_API_COMPATIBLE_H_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "xtp_api_struct.h"
#include "xtp_api_struct_compatible.h"

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
 * \class XTP::API::QuoteCompatibleSpi
 *
 * \brief ����ص�������
 *
 * \author ��̩֤ȯ�ɷ����޹�˾
 * \date ʮ�� 2015
 */
namespace XTP {
	namespace API {
		class QuoteCompatibleSpi
		{
		public:
			///���ͻ����뽻�׺�̨ͨ�����ӶϿ�ʱ���÷��������á���������������API���Զ��������ӣ��ͻ��˿ɲ�������
			///@param nReason ����ԭ��
			///        0x1001 �����ʧ��
			///        0x1002 ����дʧ��
			///        0x2001 ����������ʱ
			///        0x2002 ��������ʧ��
			///        0x2003 �յ�������
			virtual void OnFrontDisconnected(int nReason) {};


			///����Ӧ��
			///@param pRspInfo ������Ϣ
			///@param nRequestID �����ID
			///@param bIsLast �Ƿ����һ��
			virtual void OnRspError(CXTPRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

			///�ǳ�������Ӧ
			///@param pUserLogout �û��ǳ��Ĳ���
			///@param pRspInfo ������Ϣ
			///@param nRequestID �����ID
			///@param bIsLast �Ƿ����һ��
			virtual void OnRspUserLogout(CXTPUserLogoutField *pUserLogout, CXTPRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

			///��������Ӧ��
			///@param pSpecificInstrument ��ϸ�ĺ�Լ�������
			///@param pRspInfo ������Ϣ
			///@param nRequestID �����ID
			///@param bIsLast �Ƿ����һ��
			virtual void OnRspSubMarketData(CXTPSpecificInstrumentField *pSpecificInstrument, CXTPRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

			///ȡ����������Ӧ��
			///@param pSpecificInstrument ��ϸ�ĺ�Լȡ���������
			///@param pRspInfo ������Ϣ
			///@param nRequestID �����ID
			///@param bIsLast �Ƿ����һ��
			virtual void OnRspUnSubMarketData(CXTPSpecificInstrumentField *pSpecificInstrument, CXTPRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

			///�������֪ͨ
			///@param pDepthMarketData ��������
			virtual void OnRtnDepthMarketData(CXTPDepthMarketDataField *pDepthMarketData) {};
		};
	}
}


/*!
* \class XTP::API::QuoteCompatibleApi
*
* \brief ���鶩�ļ��ݽӿ���
*
* \author ��̩֤ȯ�ɷ����޹�˾
* \date ʮ�� 2015
*/
namespace XTP {
	namespace API {
		class MD_API_EXPORT QuoteCompatibleApi
		{
		public:
			///����QuoteApi
			///@param pszFlowPath ����������Ϣ�ļ���Ŀ¼��Ĭ��Ϊ��ǰĿ¼
			///@return ��������UserApi
			///modify for udp marketdata
			static QuoteCompatibleApi *CreateQuoteApi(const char *pszFlowPath = "");

			///ɾ���ӿڶ�����
			///@remark ����ʹ�ñ��ӿڶ���ʱ,���øú���ɾ���ӿڶ���
			virtual void Release() = 0;

			 	
			///�ȴ��ӿ��߳̽�������
			///@return �߳��˳�����
			virtual int Join() = 0;

			///��ȡ��ǰ������
			///@return ��ȡ���Ľ�����
			///@remark ֻ�е�¼�ɹ���,���ܵõ���ȷ�Ľ�����
			virtual const char *GetTradingDay() = 0;

			///ע��ǰ�û������ַ
			///@param pszFrontAddress ǰ�û������ַ��
			///@remark �����ַ�ĸ�ʽΪ����protocol://ipaddress:port�����磺��tcp://127.0.0.1:17001���� 
			///@remark ��tcp��������Э�飬��127.0.0.1�������������ַ����17001������������˿ںš�
			virtual void RegisterFront(char *pszFrontAddress) = 0;

			///ע��ص��ӿ�
			///@param pSpi �����Իص��ӿ����ʵ��
			virtual void RegisterSpi(QuoteCompatibleSpi *pSpi) = 0;

			///�������顣
			///@param ppInstrumentID ��ԼID  
			///@param nCount Ҫ����/�˶�����ĺ�Լ����
			///@param pExchageID ����������
			///@remark ����һ���Զ���ͬһ֤ȯ�������Ķ����Լ
			virtual int SubscribeMarketData(char *ppInstrumentID[], int nCount, XTP_EXCHANGE_TYPE pExchageID) = 0;

			///�˶����顣
			///@param ppInstrumentID ��ԼID  
			///@param nCount Ҫ����/�˶�����ĺ�Լ����
			///@param pExchageID ����������
			///@remark ����һ����ȡ������ͬһ֤ȯ�������Ķ����Լ
			virtual int UnSubscribeMarketData(char *ppInstrumentID[], int nCount, XTP_EXCHANGE_TYPE pExchageID) = 0;

			///�û���¼����
			///@return ��¼�Ƿ�ɹ�����0����ʾ��¼�ɹ����ǡ�0����ʾ��¼����
			///@remark �˺���Ϊͬ������ʽ������Ҫ�첽�ȴ���¼�ɹ������������ؼ��ɽ��к�������
			virtual int ReqUserLogin(CXTPReqUserLoginField *pReqUserLoginField, int nRequestID) = 0;


			///�ǳ�����
			///@return �ǳ��Ƿ�ɹ�����0����ʾ�ǳ��ɹ����ǡ�0����ʾ�ǳ�����
			virtual int ReqUserLogout(CXTPUserLogoutField *pUserLogout, int nRequestID) = 0;

		protected:
			~QuoteCompatibleApi() {};
		};
	}
}




#endif
