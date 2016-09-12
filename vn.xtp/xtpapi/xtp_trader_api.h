/////////////////////////////////////////////////////////////////////////
///@author ��̩֤ȯ�ɷ����޹�˾
///@file xtp_trader_api.h
///@brief ����ͻ��˽��׽ӿ�
/////////////////////////////////////////////////////////////////////////

#ifndef _XTP_TRADER_API_H_
#define _XTP_TRADER_API_H_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "xtp_api_struct.h"

#if defined(ISLIB) && defined(WIN32)
#ifdef LIB_TRADER_API_EXPORT
#define TRADER_API_EXPORT __declspec(dllexport)
#else
#define TRADER_API_EXPORT __declspec(dllimport)
#endif
#else
#define TRADER_API_EXPORT 
#endif

/*!
* \class XTP::API::TraderSpi
*
* \brief ���׽ӿ���Ӧ��
*
* \author ��̩֤ȯ�ɷ����޹�˾
* \date ʮ�� 2015
*/
namespace XTP {
	namespace API {

		class TraderSpi
		{
		public:

			///���ͻ����뽻�׺�̨ͨ�����ӶϿ�ʱ���÷��������á�
			///@remark ������������δ֧��
			///@param reason ����ԭ��
			virtual void OnDisconnected(int reason) {};

			///����Ӧ��
			///@param error_info ����Ĵ������ʹ�����Ϣ
			virtual void OnError(XTPRI *error_info) {};

			///����֪ͨ
			///@param order_info ������Ӧ������Ϣ
			///@param error_info �������ܾ����߷�������ʱ�������ʹ�����Ϣ
			///@remark ÿ�ζ���״̬����ʱ�����ᱻ����
			virtual void OnOrderEvent(XTPOrderInfo *order_info, XTPRI *error_info) {};

			///�ɽ�֪ͨ
			///@param trade_info �ɽ��ر��ľ�����Ϣ
			///@remark �����гɽ�������ʱ�򣬻ᱻ����
			virtual void OnTradeEvent(XTPTradeReport *trade_info) {};

			///����������Ӧ
			///@param cancel_info ����������Ϣ�������������ʹ�������order_xtp_id
			///@param error_info �������ܾ����߷�������ʱ�������ʹ�����Ϣ
			virtual void OnCancelOrderError(XTPOrderCancelInfo *cancel_info, XTPRI *error_info) {};

			///�����ѯ������Ӧ
			///@param order_info ��ѯ���ı���
			///@param error_info ������Ϣ
			///@param request_id ����Ϣ��Ӧ������Ӧ������ID
			///@param is_last ����Ϣ��Ӧ�����Ƿ�Ϊrequest_id������������Ӧ�����һ����Ӧ
			///@remark ����֧�ַ�ʱ�β�ѯ��һ����ѯ������ܶ�Ӧ�����Ӧ
			virtual void OnQueryOrder(XTPQueryOrderRsp *order_info, XTPRI *error_info, int request_id, bool is_last) {};

			///�����ѯ�ɽ���Ӧ
			///@param trade_info ��ѯ���ĳɽ��ر�
			///@param error_info ������Ϣ
			///@param request_id ����Ϣ��Ӧ������Ӧ������ID
			///@param is_last ����Ϣ��Ӧ�����Ƿ�Ϊrequest_id������������Ӧ�����һ����Ӧ
			///@remark ����֧�ַ�ʱ�β�ѯ��һ����ѯ������ܶ�Ӧ�����Ӧ
			virtual void OnQueryTrade(XTPQueryTradeRsp *trade_info, XTPRI *error_info, int request_id, bool is_last) {};

			///�����ѯͶ���ֲ߳���Ӧ
			///@param position ��ѯ���ĳֲ����
			///@param error_info ������Ϣ
			///@param request_id ����Ϣ��Ӧ������Ӧ������ID
			///@param is_last ����Ϣ��Ӧ�����Ƿ�Ϊrequest_id������������Ӧ�����һ����Ӧ
			///@remark �����û����ܳ��ж����Ʊ��һ����ѯ������ܶ�Ӧ�����Ӧ
			virtual void OnQueryPosition(XTPQueryStkPositionRsp *position, XTPRI *error_info, int request_id, bool is_last) {};

			///�����ѯ�ʽ��˻���Ӧ
			virtual void OnQueryAsset(XTPQueryAssetRsp *asset, XTPRI *error_info, int request_id, bool is_last) {};


		};
	}
}


/*!
* \class XTP::API::TraderApi
*
* \brief ���׽ӿ���
*
* \author ��̩֤ȯ�ɷ����޹�˾
* \date ʮ�� 2015
*/
namespace XTP {
	namespace API {

		class TRADER_API_EXPORT TraderApi
		{
		public:
			///����TraderApi
			///@param save_file_path �������ֶΣ�����������Ϣ�ļ���Ŀ¼��Ĭ��Ϊ��ǰĿ¼
			///@return ��������UserApi
			static TraderApi *CreateTraderApi(const char *save_file_path = "");

			///ɾ���ӿڶ�����
			///@remark ����ʹ�ñ��ӿڶ���ʱ,���øú���ɾ���ӿڶ���
			virtual void Release() = 0;

			///��ȡ��ǰ������
			///@return ��ȡ���Ľ�����
			///@remark ֻ�е�¼�ɹ���,���ܵõ���ȷ�Ľ�����
			virtual const char *GetTradingDay() = 0;

			///ע��ص��ӿ�
			///@param spi �����Իص��ӿ����ʵ��
			virtual void RegisterSpi(TraderSpi *spi) = 0;

			///�û���¼����
			///@return ��¼�Ƿ�ɹ�����0����ʾ��¼�ɹ�����-1����ʾ���ӷ�����������-2����ʾ�Ѵ������ӣ��������ظ���¼�������Ҫ����������logout
			///@param ip ��������ַ
			///@param port �������˿ں�
			///@param user ��¼�û���
			///@param password ��¼����
			///@param sock_type ��1������TCP����2������UDP��Ŀǰ��ʱֻ֧��TCP
			///@param client_id �������ֶΣ��ͻ���id����������ͬһ�û��Ĳ�ͬ����
			///@remark �˺���Ϊͬ������ʽ������Ҫ�첽�ȴ���¼�ɹ������������ؼ��ɽ��к�������
			virtual int Login(const char* ip, int port, const char* user, const char* password, XTP_PROTOCOL_TYPE sock_type, int client_id = 0) = 0;


			///�ǳ�����
			///@return �ǳ��Ƿ�ɹ�����0����ʾ�ǳ��ɹ�����-1����ʾ�ǳ�ʧ��
			virtual int Logout() = 0;

			///����¼������
			///@return ������XTPϵͳ�е�ID,���Ϊ��0����ʾ����ʧ�ܣ��û���Ҫ��¼�·��ص�order_xtp_id
			///@param order ����¼����Ϣ
			virtual uint64_t InsertOrder(XTPOrderInsertInfo *order) = 0;

			///������������
			///@return ��������XTPϵͳ�е�ID,���Ϊ��0����ʾ����ʧ�ܣ��û���Ҫ��¼�·��ص�order_cancel_xtp_id
			///@param order_xtp_id ��Ҫ������ί�е���XTPϵͳ�е�ID
			virtual uint64_t CancelOrder(const uint64_t order_xtp_id) = 0;

			///���ݱ���ID�����ѯ����
			///@return ��ѯ�Ƿ�ɹ�����0����ʾ�ɹ����ǡ�0����ʾ����
			///@param order_xtp_id ��Ҫ��ѯ�ı�����xtpϵͳ�е�ID
			///@param request_id �����û���λ��ѯ��Ӧ��ID�����û��Զ���
			virtual int QueryOrderByXTPID(const uint64_t order_xtp_id, int request_id) = 0;

			///�����ѯ����
			///@return ��ѯ�Ƿ�ɹ�����0����ʾ�ɹ����ǡ�0����ʾ����
			///@param query_param ��Ҫ��ѯ�Ķ������ɸѡ����
			///@param request_id �����û���λ��ѯ��Ӧ��ID�����û��Զ���
			///@remark �÷���֧�ַ�ʱ�β�ѯ�������Ʊ����Ϊ�գ���Ĭ�ϲ�ѯʱ����ڵ����б����������ѯʱ��������и���Ʊ������صı���
			virtual int QueryOrders(const XTPQueryOrderReq *query_param, int request_id) = 0;

			///����ί�б�������ѯ��سɽ�
			///@return ��ѯ�Ƿ�ɹ�����0����ʾ�ɹ����ǡ�0����ʾ����
			///@param order_xtp_id ��Ҫ��ѯ��ί�б��
			///@param request_id �����û���λ��ѯ��Ӧ��ID�����û��Զ���
			///@remark �˺�����ѯ���Ľ�����ܶ�Ӧ�����Ӧ
			virtual int QueryTradesByXTPID(const uint64_t order_xtp_id, int request_id) = 0;

			///�����ѯ�ѳɽ�
			///@return ��ѯ�Ƿ�ɹ�����0����ʾ�ɹ����ǡ�0����ʾ����
			///@param query_param ��Ҫ��ѯ�ĳɽ��ر�ɸѡ����
			///@param request_id �����û���λ��ѯ��Ӧ��ID�����û��Զ���
			///@remark �÷���֧�ַ�ʱ�β�ѯ�������Ʊ����Ϊ�գ���Ĭ�ϲ�ѯʱ����ڵ����гɽ��ر��������ѯʱ��������и���Ʊ������صĳɽ��ر�
			virtual int QueryTrades(XTPQueryTraderReq *query_param, int request_id) = 0;

			///�����ѯͶ���ֲ߳�
			///@return ��ѯ�Ƿ�ɹ�����0����ʾ�ɹ����ǡ�0����ʾ����
			///@param ticker ��Ҫ��ѯ�ĳֲֹ�Ʊ������Ϊ��
			///@param request_id �����û���λ��ѯ��Ӧ��ID�����û��Զ���
			///@remark �÷�������û��ṩ�˹�Ʊ���룬����ѯ�˹�Ʊ�ĳֲ���Ϣ�������Ʊ����Ϊ�գ���Ĭ�ϲ�ѯ���гֲ���Ϣ
			virtual int QueryPosition(const char *ticker, int request_id) = 0;

			///�����ѯ�ʲ�
			///@return ��ѯ�Ƿ�ɹ�����0����ʾ�ɹ����ǡ�0����ʾ����
			///@param request_id �����û���λ��ѯ��Ӧ��ID�����û��Զ���
			virtual int QueryAsset(int request_id) = 0;

		protected:
			~TraderApi() {};
		};

			}
}




#endif
