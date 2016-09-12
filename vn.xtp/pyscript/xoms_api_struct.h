/*!
 * \file xoms_api_struct.h
 * \date 2015/10/23 16:45
 *
 * \author howellxu
 * Contact: user@company.com
 *
 * \brief ���嶩������ϵͳ�ⲿ�����ӿ����ݽṹ
 *
 * TODO: long description
 *
 * \note
*/
#ifndef _XOMS_API_STRUCT_H_
#define _XOMS_API_STRUCT_H_

#include "xtp_api_data_type.h"

#define XTP_API_TICKER_LEN  13
#define XTP_API_TICKER_NAME_LEN  48
#define XTP_LOCAL_ORDER_LEN     11
#define XTP_ORDER_EXCH_LEN      17
#define XTP_ORDER_RES_LEN       4
#define XTP_SUBPBUID_LEN        7
#define XTP_BRANCH_PBU_LEN      7
#define XTP_SYS_INSTRUMENT_LEN  24


//=====================�ͻ��˽ӿڶ���=================================
///�¶�������
struct XTPOrderInsertInfo
{
    ///XTPϵͳ����ID
    uint64_t                order_xtp_id;
    ///��������,�ɿͻ��Զ���
    uint32_t	            order_client_id;
    ///��Լ���� �ͻ������󲻴��ո�
    char                    ticker[XTP_API_TICKER_LEN];
    ///�����г�
    XTP_MARKET_TYPE         market;
    ///�۸�
    double                  price;
    ///ֹ��ۣ������ֶΣ�
    double                  stop_price;
    ///����
    int64_t                 quantity;
    ///�����۸�
    XTP_PRICE_TYPE          price_type;
    ///��������
    XTP_SIDE_TYPE           side;  
 };

///����
struct XTPOrderCancel
{
    ///XTPϵͳ����ID
    uint64_t                 order_cancel_xtp_id;
    ///������������
    uint32_t                 order_cancel_client_id; 
    ///��Լ����
    char                     ticker[XTP_API_TICKER_LEN];
    ///�����г�
    XTP_MARKET_TYPE          market;
    ///����ʱ��
    int64_t                  action_time;
    ///��������
    uint32_t                 order_client_id;
    ///�������󶩵������
    uint64_t                 order_xtp_id;
};


///����ʧ����Ӧ��Ϣ
struct XTPOrderCancelInfo
{
    ///����XTPID
    uint64_t                 order_cancel_xtp_id;
    ///ԭʼ����XTPID
    uint64_t                 order_xtp_id;
};


///������Ӧ�ṹ��
struct XTPOrderInfo
{
    ///XTPϵͳ����ID
	uint64_t                order_xtp_id;
	///�������ã��û��Զ���
	uint32_t	            order_client_id;
    ///�����������ã��û��Զ���
    uint32_t                order_cancel_client_id;
    ///������XTPϵͳ�е�id
    uint64_t                order_cancel_xtp_id;
	///��Լ����
	char                    ticker[XTP_API_TICKER_LEN];
	///�����г�
	XTP_MARKET_TYPE         market;
	///�۸�
	double                  price;
	///����
	int64_t                 quantity;
	///�����۸�����
	XTP_PRICE_TYPE          price_type;
	///��������
	XTP_SIDE_TYPE           side;
	///��ɽ�����
	int64_t                 qty_traded;
	///ʣ������
	int64_t                 qty_left;
	///ί��ʱ��
	int64_t                 insert_time;
	///����޸�ʱ��
	int64_t                 update_time;
	///����ʱ��
	int64_t                 cancel_time;
	///�ɽ����
	double                  trade_amount;
	///���ر������ OMS���ɵĵ���
	char                    order_local_id[XTP_LOCAL_ORDER_LEN];
	///����״̬
	XTP_ORDER_STATUS_TYPE   order_status;
	///�����ύ״̬
	XTP_ORDER_SUBMIT_STATUS_TYPE   order_submit_status;
	///��������
	TXTPOrderTypeType       order_type;
};



///�����ɽ��ṹ��
struct XTPTradeReport
{
    ///XTPϵͳ����ID
    uint64_t                 order_xtp_id;
    ///��������
    uint32_t                 order_client_id;
    ///��Լ����
    char                     ticker[XTP_API_TICKER_LEN];
    ///�����г�
    XTP_MARKET_TYPE          market;
    ///������
    uint64_t                 local_order_id;
    ///�ɽ����
    uint64_t                 exec_id;
    ///�۸�
    double                   price;
    ///����
    int64_t                  quantity;
    ///�ɽ�ʱ��
    int64_t                  trade_time;
    ///�ɽ����
    double                   trade_amount;
    ///�ɽ���� --�ر���¼��
    uint64_t                 report_index;
    ///������� --����������
    char                     order_exch_id[XTP_ORDER_EXCH_LEN];
    ///�ɽ�����  --�ɽ��ر��е�ִ������
    TXTPTradeTypeType        trade_type;
    ///��������
    XTP_SIDE_TYPE            side;
    ///����������Ա���� 
    char                     branch_pbu[XTP_BRANCH_PBU_LEN];
};


//////////////////////////////////////////////////////////////////////////
///������ѯ
//////////////////////////////////////////////////////////////////////////
///������ѯ����-������ѯ
struct XTPQueryOrderReq
{
    ///֤ȯ���룬����Ϊ�գ����Ϊ�գ���Ĭ�ϲ�ѯʱ����ڵ����гɽ��ر�
    char      ticker[XTP_API_TICKER_LEN];
    ///��ʽΪYYYYMMDDHHMMSSsss��Ϊ0��Ĭ�ϵ�ǰ������0��
    int64_t   begin_time;
    ///��ʽΪYYYYMMDDHHMMSSsss��Ϊ0��Ĭ�ϵ�ǰʱ��
    int64_t   end_time;  
};

///������ѯ��Ӧ�ṹ��
typedef XTPOrderInfo XTPQueryOrderRsp;


//////////////////////////////////////////////////////////////////////////
///�ɽ��ر���ѯ
//////////////////////////////////////////////////////////////////////////
///��ѯ�ɽ���������-����ִ�б�Ų�ѯ�������ֶΣ�
struct XTPQueryReportByExecIdReq
{
    ///XTP����ϵͳID
    uint64_t  order_xtp_id;  
    ///�ɽ�ִ�б��
    uint64_t  exec_id; 
};

///��ѯ�ɽ��ر�����-��ѯ����
struct XTPQueryTraderReq
{
    ///֤ȯ���룬����Ϊ�գ����Ϊ�գ���Ĭ�ϲ�ѯʱ����ڵ����гɽ��ر�
    char      ticker[XTP_API_TICKER_LEN];
    ///��ʼʱ�䣬��ʽΪYYYYMMDDHHMMSSsss��Ϊ0��Ĭ�ϵ�ǰ������0��
    int64_t   begin_time; 
    ///����ʱ�䣬��ʽΪYYYYMMDDHHMMSSsss��Ϊ0��Ĭ�ϵ�ǰʱ��
    int64_t   end_time;  
};

///�ɽ��ر���ѯ��Ӧ�ṹ��
typedef XTPTradeReport  XTPQueryTradeRsp;



//////////////////////////////////////////////////////////////////////////
///�˻��ʽ��ѯ��Ӧ�ṹ��
//////////////////////////////////////////////////////////////////////////
struct XTPQueryAssetRsp
{
	///���ʲ�
	double total_asset;
    ///�����ʽ�
    double buying_power;
	///֤ȯ�ʲ�
	double security_asset;
    ///�ۼ�����ɽ�֤ȯռ���ʽ𣨱����ֶΣ�
    double fund_buy_amount;
    ///�ۼ�����ɽ����׷��ã������ֶΣ�
    double fund_buy_fee;
    ///�ۼ������ɽ�֤ȯ�����ʽ𣨱����ֶΣ�
    double fund_sell_amount;
    ///�ۼ������ɽ����׷��ã������ֶΣ�
    double fund_sell_fee;
};



//////////////////////////////////////////////////////////////////////////
///��ѯ��Ʊ�ֲ����
//////////////////////////////////////////////////////////////////////////
struct XTPQueryStkPositionRsp
{
    ///֤ȯ����
    char      ticker[XTP_API_TICKER_LEN]; 
    ///֤ȯ����
    char      ticker_name[XTP_API_TICKER_NAME_LEN]; 
    ///��ǰ�ֲ�
    int64_t   total_qty; 
    ///���ùɷ���
    int64_t   sellable_qty; 
    ///�ֲֳɱ�
    double    avg_price;           
    ///����ӯ��
    double    unrealized_pnl;        
};




#endif //_XOMS_API_STRUCT_H_

