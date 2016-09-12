/////////////////////////////////////////////////////////////////////////
///@author ��̩֤ȯ�ɷ����޹�˾
///@file xquote_api_struct.h
///@brief ����������������ݽṹ
/////////////////////////////////////////////////////////////////////////
#ifndef _XQUOTE_API_STRUCT_H_
#define _XQUOTE_API_STRUCT_H_

#include <stdint.h>
#include "xtp_api_data_type.h"

///ָ���ĺ�Լ
typedef struct XTPSpecificTickerStruct
{
    ///����������
    XTP_EXCHANGE_TYPE exchange_id;
    ///��Լ���루��������������Ϣ������"600000  "
	char	ticker[XTP_TICKER_LEN];
} XTPST;


///����
typedef struct XTPMarketDataStruct
{
    // ����
    ///����������
    XTP_EXCHANGE_TYPE exchange_id;
    ///��Լ���루��������������Ϣ��
    char	ticker[XTP_TICKER_LEN];

    // ��Ʊ�ȼ۸�
	///���¼�
	double	last_price;
	///������
	double	pre_close_price;
	///����
	double	open_price;
	///��߼�
	double	high_price;
	///��ͼ�
	double	low_price;
    ///������
    double	close_price;

    // �ڻ�������
    ///��ֲ�����Ŀǰδ��д��
    double	pre_open_interest;
    ///�ֲ�����Ŀǰδ��д��
	double	open_interest;
    ///�ϴν���ۣ�Ŀǰδ��д��
    double	pre_settlement_price;
    ///���ν���ۣ�Ŀǰδ��д��
	double	settlement_price;

	///��ͣ��ۣ�Ŀǰδ��д��
	double	upper_limit_price;
	///��ͣ��ۣ�Ŀǰδ��д��
	double	lower_limit_price;
	///����ʵ�ȣ�Ŀǰδ��д��
	double	pre_delta;
	///����ʵ�ȣ�Ŀǰδ��д��
	double	curr_delta;

    /// ʱ����
    int64_t data_time;

    // ��������
    ///����
    int32_t	qty;
    ///�ɽ����
    double	turnover;
    ///���վ���
    double	avg_price;

    // ������
    ///ʮ�������
    double bid[10];
    ///ʮ��������
    double	ask[10];
    ///ʮ��������
    int32_t	bid_qty[10];
    ///ʮ��������
    int32_t	ask_qty[10];

    // ltsû�а��������ݣ�Ŀǰδ��д��
    ///�ɽ�����
    int32_t trades_count;
    ///��ǰ����״̬˵��
    char ticker_status[8];
    ///ί����������
    int32_t total_bid_qty;
    ///ί����������
    int32_t total_ask_qty;
    ///��Ȩƽ��ί��۸�
    double ma_bid_price;
    ///��Ȩƽ��ί���۸�
    double ma_ask_price;
    ///ծȯ��Ȩƽ��ί��۸�
    double ma_bond_bid_price;
    ///ծȯ��Ȩƽ��ί���۸�
    double ma_bond_ask_price;
    ///ծȯ����������
    double yield_to_maturity;
    ///ETF��ֵ��ֵ
    double iopv;
    ///ETF�깺����
    int32_t etf_buy_count;
    ///ETF��ر���
    int32_t etf_sell_count;
    ///ETF�깺����
    double etf_buy_qty;
    ///ETF�깺���
    double etf_buy_money;
    ///ETF�������
    double etf_sell_qty;
    ///ETF��ؽ��
    double etf_sell_money;
    ///Ȩִ֤�е�������
    double total_warrant_exec_qty;
    ///Ȩ֤��ͣ�۸�Ԫ��
    double warrant_lower_price;
    ///Ȩ֤��ͣ�۸�Ԫ��
    double warrant_upper_price;
    ///���볷������
    int32_t cancel_buy_count;
    ///������������
    int32_t cancel_sell_count;
    ///���볷������
    double cancel_buy_qty;
    ///������������
    double cancel_sell_qty;
    ///���볷�����
    double cancel_buy_money;
    ///�����������
    double cancel_sell_money;
    ///�����ܱ���
    int32_t total_buy_count;
    ///�����ܱ���
    int32_t total_sell_count;
    ///����ί�гɽ����ȴ�ʱ��
    int32_t duration_after_buy;
    ///����ί�гɽ����ȴ�ʱ��
    int32_t duration_after_sell;
    ///��ί�м�λ��
    int32_t num_bid_orders;
    ///����ί�м�λ��
    int32_t num_ask_orders;
    ///�ɽ�ʱ�䣨UA3113��
    int32_t exec_time;
    ///���б�־��UA103/UA104��
    char is_market_closed[4];
    ///��Լ�ֲ�����UA103��
    double total_position;
    ///��ӯ��1��UA103��
    double pe_ratio1;
    ///��ӯ��2��UA103��
    double pe_ratio2;
} XTPMD;

#endif
