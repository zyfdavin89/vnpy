/////////////////////////////////////////////////////////////////////////
///@author ��̩֤ȯ�ɷ����޹�˾
///@file xtp_api_struct_compatible.h
///@brief ����ҵ��ļ������ݽṹ
/////////////////////////////////////////////////////////////////////////

#if !defined(XTP_FTDCSTRUCT_H)
#define XTP_FTDCSTRUCT_H

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "xtp_api_data_type.h"

///ָ���ĺ�Լ
struct CXTPSpecificInstrumentField
{
	///��Լ����
	TXTPInstrumentIDType	InstrumentID;
	///����������
	TXTPExchangeIDType	ExchangeID;
};


///�������
struct CXTPDepthMarketDataField
{
	///������
	TXTPDateType	TradingDay;
	///��Լ����
	TXTPInstrumentIDType	InstrumentID;
	///����������
	TXTPExchangeIDType	ExchangeID;
	///��Լ�ڽ������Ĵ���
	TXTPExchangeInstIDType	ExchangeInstID;
	///���¼�
	TXTPPriceType	LastPrice;
	///�ϴν����
	TXTPPriceType	PreSettlementPrice;
	///������
	TXTPPriceType	PreClosePrice;
	///��ֲ���
	TXTPLargeVolumeType	PreOpenInterest;
	///����
	TXTPPriceType	OpenPrice;
	///��߼�
	TXTPPriceType	HighestPrice;
	///��ͼ�
	TXTPPriceType	LowestPrice;
	///����
	TXTPVolumeType	Volume;
	///�ɽ����
	TXTPMoneyType	Turnover;
	///�ֲ���
	TXTPLargeVolumeType	OpenInterest;
	///������
	TXTPPriceType	ClosePrice;
	///���ν����
	TXTPPriceType	SettlementPrice;
	///��ͣ���
	TXTPPriceType	UpperLimitPrice;
	///��ͣ���
	TXTPPriceType	LowerLimitPrice;
	///����ʵ��
	TXTPRatioType	PreDelta;
	///����ʵ��
	TXTPRatioType	CurrDelta;
	///����޸�ʱ��
	TXTPTimeType	UpdateTime;
	///����޸ĺ���
	TXTPMillisecType	UpdateMillisec;
	///���վ���
	TXTPPriceType	AveragePrice;
	///ҵ������
	TXTPDateType	ActionDay;
	///����(��)
	TXTPLargeVolumeType	Volume_New;

	union {
		struct {
			///�����һ
			TXTPPriceType	BidPrice1;
			///����۶�
			TXTPPriceType	BidPrice2;
			///�������
			TXTPPriceType	BidPrice3;
			///�������
			TXTPPriceType	BidPrice4;
			///�������
			TXTPPriceType	BidPrice5;
			///�������
			TXTPPriceType	BidPrice6;
			///�������
			TXTPPriceType	BidPrice7;
			///����۰�
			TXTPPriceType	BidPrice8;
			///����۾�
			TXTPPriceType	BidPrice9;
			///�����ʮ
			TXTPPriceType	BidPrice10;
		};
		struct {
			///ʮ�����̼�
			TXTPPriceType BidPrices[10];
		};
	};
	union {
		struct {
			///������һ
			TXTPPriceType	AskPrice1;
			///�����۶�
			TXTPPriceType	AskPrice2;
			///��������
			TXTPPriceType	AskPrice3;
			///��������
			TXTPPriceType	AskPrice4;
			///��������
			TXTPPriceType	AskPrice5;
			///��������
			TXTPPriceType	AskPrice6;
			///��������
			TXTPPriceType	AskPrice7;
			///�����۰�
			TXTPPriceType	AskPrice8;
			///�����۾�
			TXTPPriceType	AskPrice9;
			///������ʮ
			TXTPPriceType	AskPrice10;
		};
		struct {
			///ʮ��������
			TXTPPriceType	AskPrices[10];
		};
	};
	union {
		struct {
			///������һ
			TXTPVolumeType	BidVolume1;
			///��������
			TXTPVolumeType	BidVolume2;
			///��������
			TXTPVolumeType	BidVolume3;
			///��������
			TXTPVolumeType	BidVolume4;
			///��������
			TXTPVolumeType	BidVolume5;
			///��������
			TXTPVolumeType	BidVolume6;
			///��������
			TXTPVolumeType	BidVolume7;
			///��������
			TXTPVolumeType	BidVolume8;
			///��������
			TXTPVolumeType	BidVolume9;
			///������ʮ
			TXTPVolumeType	BidVolume10;
		};
		struct {
			///ʮ��������
			TXTPVolumeType	BidVolumes[10];
		};
	};
	union {
		struct {
			///������һ
			TXTPVolumeType	AskVolume1;
			///��������
			TXTPVolumeType	AskVolume2;
			///��������
			TXTPVolumeType	AskVolume3;
			///��������
			TXTPVolumeType	AskVolume4;
			///��������
			TXTPVolumeType	AskVolume5;
			///��������
			TXTPVolumeType	AskVolume6;
			///��������
			TXTPVolumeType	AskVolume7;
			///��������
			TXTPVolumeType	AskVolume8;
			///��������
			TXTPVolumeType	AskVolume9;
			///������ʮ
			TXTPVolumeType	AskVolume10;
		};
		struct {
			///ʮ��������
			TXTPVolumeType	AskVolumes[10];
		};
	};

	///�ɽ�����
	TXTPVolumeType NumTrades;
	///��ǰ����״̬˵��
	char InstrumentStatus[8];
	///ί����������
	TXTPVolumeType TotalBidQty;
	///ί����������
	TXTPVolumeType TotalOfferQty;
	///��Ȩƽ��ί��۸�
	TXTPPriceType WeightedAvgBidPx;
	///��Ȩƽ��ί���۸�
	TXTPPriceType WeightedAvgOfferPx;
	///ծȯ��Ȩƽ��ί��۸�
	TXTPPriceType AltWeightedAvgBidPx;
	///ծȯ��Ȩƽ��ί���۸�
	TXTPPriceType AltWeightedAvgOfferPx;
	///ծȯ����������
	TXTPPriceType YieldToMaturity;
	///ETF��ֵ��ֵ
	TXTPPriceType IOPV;
	///ETF�깺����
	TXTPVolumeType ETFBuyNumber;
	///ETF��ر���
	TXTPVolumeType ETFSellNumber;
	///ETF�깺����
	TXTPLargeVolumeType ETFBuyAmount;
	///ETF�������
	TXTPMoneyType ETFBuyMoney;
	///ETF�깺���
	TXTPLargeVolumeType ETFSellAmount;
	///ETF��ؽ��
	TXTPMoneyType ETFSellMoney;
	///Ȩִ֤�е�������
	TXTPLargeVolumeType TotalWarrantExecQty;
	///Ȩ֤��ͣ�۸�Ԫ��
	TXTPPriceType WarLowerPx;
	///Ȩ֤��ͣ�۸�Ԫ��
	TXTPPriceType WarUpperPx;
	///���볷������
	TXTPVolumeType WithdrawBuyNumber;
	///������������
	TXTPVolumeType WithdrawSellNumber;
	///���볷������
	TXTPLargeVolumeType WithdrawBuyAmount;
	///������������
	TXTPLargeVolumeType WithdrawSellAmount;
	///���볷�����
	TXTPMoneyType WithdrawBuyMoney;
	///�����������
	TXTPMoneyType WithdrawSellMoney;
	///�����ܱ���
	TXTPVolumeType TotalBidNumber;
	///�����ܱ���
	TXTPVolumeType TotalOfferNumber;
	///����ί�гɽ����ȴ�ʱ��
	TXTPVolumeType BidTradeMaxDuration;
	///����ί�гɽ����ȴ�ʱ��
	TXTPVolumeType OfferTradeMaxDuration;
	///��ί�м�λ��
	TXTPVolumeType NumBidOrders;
	///����ί�м�λ��
	TXTPVolumeType NumOfferOrders;
	///�ɽ�ʱ�䣨UA3113��
	int TradeTime;
	///���б�־��UA103/UA104��
	char EndOfDayMaker[4];
	///��Լ�ֲ�����UA103��
	TXTPLargeVolumeType TotalLongPosition;
	///��ӯ��1��2λС������UA103��
	double PERatio1;
	///��ӯ��2��2λС������UA103��
	double PERatio2;

};


///��Ӧ��Ϣ
struct CXTPRspInfoField
{
	///�������
	TXTPErrorIDType	ErrorID;
	///������Ϣ
	TXTPErrorMsgType	ErrorMsg;
};

///������
struct CXTPExchangeField
{
	///����������
	TXTPExchangeIDType	ExchangeID;
	///����������
	TXTPExchangeNameType	ExchangeName;
	///����������
	TXTPExchangePropertyType	ExchangeProperty;
};

///��Ʒ
struct CXTPProductField
{
	///��Ʒ����
	TXTPInstrumentIDType	ProductID;
	///��Ʒ����
	TXTPProductNameType	ProductName;
	///����������
	TXTPExchangeIDType	ExchangeID;
	///��Ʒ����
	TXTPProductClassType	ProductClass;
	///��Լ��������
	TXTPVolumeMultipleType	VolumeMultiple;
	///��С�䶯��λ
	TXTPPriceType	PriceTick;
	///�м۵�����µ���
	TXTPVolumeType	MaxMarketOrderVolume;
	///�м۵���С�µ���
	TXTPVolumeType	MinMarketOrderVolume;
	///�޼۵�����µ���
	TXTPVolumeType	MaxLimitOrderVolume;
	///�޼۵���С�µ���
	TXTPVolumeType	MinLimitOrderVolume;
	///�ֲ�����
	TXTPPositionTypeType	PositionType;
	///�ֲ���������
	TXTPPositionDateTypeType	PositionDateType;
	///ETF��С���׵�λ
	TXTPVolumeType	EFTMinTradeVolume;
};

///��Լ
struct CXTPInstrumentField
{
	///��Լ����
	TXTPInstrumentIDType	InstrumentID;
	///����������
	TXTPExchangeIDType	ExchangeID;
	///��Լ����
	TXTPInstrumentNameType	InstrumentName;
	///��Լ�ڽ������Ĵ���
	TXTPExchangeInstIDType	ExchangeInstID;
	///��Ʒ����
	TXTPInstrumentIDType	ProductID;
	///��Ʒ����
	TXTPProductClassType	ProductClass;
	///�������
	TXTPYearType	DeliveryYear;
	///������
	TXTPMonthType	DeliveryMonth;
	///�м۵�����µ���
	TXTPVolumeType	MaxMarketOrderVolume;
	///�м۵���С�µ���
	TXTPVolumeType	MinMarketOrderVolume;
	///�޼۵�����µ���
	TXTPVolumeType	MaxLimitOrderVolume;
	///�޼۵���С�µ���
	TXTPVolumeType	MinLimitOrderVolume;
	///��Լ��������
	TXTPVolumeMultipleType	VolumeMultiple;
	///��С�䶯��λ
	TXTPPriceType	PriceTick;
	///������
	TXTPDateType	CreateDate;
	///������
	TXTPDateType	OpenDate;
	///������
	TXTPDateType	ExpireDate;
	///��ʼ������
	TXTPDateType	StartDelivDate;
	///����������
	TXTPDateType	EndDelivDate;
	///��Լ��������״̬
	TXTPInstLifePhaseType	InstLifePhase;
	///��ǰ�Ƿ���
	TXTPBoolType	IsTrading;
	///�ֲ�����
	TXTPPositionTypeType	PositionType;
	///�����ܷ񳷵�
	TXTPBoolType	OrderCanBeWithdraw;
	///��С���µ���λ
	TXTPVolumeType	MinBuyVolume;
	///��С���µ���λ
	TXTPVolumeType	MinSellVolume;
	///��ƱȨ��ģ�����
	TXTPRightModelIDType	RightModelID;
	///�ֲֽ�������
	TXTPPosTradeTypeType	PosTradeType;
	///�г�����
	TXTPInstrumentIDType	MarketID;
	///��Ȩִ�м۸�
	TXTPPriceType	ExecPrice;
	///��Ȩ���ֱ�֤��
	TXTPMoneyType	UnitMargin;
	///��Լ����
	TXTPInstrumentTypeType	InstrumentType;
	///��Ȩ��֤�����1
	TXTPRatioType	OptionsMarginParam1;
	///��Ȩ��֤�����2
	TXTPRatioType	OptionsMarginParam2;
};

///���͹�˾
struct CXTPBrokerField
{
	///���͹�˾����
	TXTPBrokerIDType	BrokerID;
	///���͹�˾���
	TXTPBrokerAbbrType	BrokerAbbr;
	///���͹�˾����
	TXTPBrokerNameType	BrokerName;
	///�Ƿ��Ծ
	TXTPBoolType	IsActive;
};

///��Ա����;��͹�˾������ձ�
struct CXTPPartBrokerField
{
	///���͹�˾����
	TXTPBrokerIDType	BrokerID;
	///����������
	TXTPExchangeIDType	ExchangeID;
	///��Ա����
	TXTPParticipantIDType	ParticipantID;
	///�Ƿ��Ծ
	TXTPBoolType	IsActive;
};

///Ͷ����
struct CXTPInvestorField
{
	///Ͷ���ߴ���
	TXTPInvestorIDType	InvestorID;
	///���͹�˾����
	TXTPBrokerIDType	BrokerID;
	///Ͷ���߷������
	TXTPInvestorIDType	InvestorGroupID;
	///Ͷ��������
	TXTPPartyNameType	InvestorName;
	///֤������
	TXTPIdCardTypeType	IdentifiedCardType;
	///֤������
	TXTPIdentifiedCardNoType	IdentifiedCardNo;
	///�Ƿ��Ծ
	TXTPBoolType	IsActive;
	///�Ϻ�Ӫҵ�����
	TXTPTraderIDType	SHBranchID;
	///����Ӫҵ�����
	TXTPTraderIDType	SZBranchID;
	///��������ϵͳ����
	TXTPSettleSystemTypeType	SettleSystemType;
	///Ͷ������Ȩ���׵ȼ�
	TXTPInvestorLevelType	InvestorLevel;
};

///���ױ���
struct CXTPTradingCodeField
{
	///Ͷ���ߴ���
	TXTPInvestorIDType	InvestorID;
	///���͹�˾����
	TXTPBrokerIDType	BrokerID;
	///����������
	TXTPExchangeIDType	ExchangeID;
	///�ͻ�����
	TXTPClientIDType	ClientID;
	///�Ƿ��Ծ
	TXTPBoolType	IsActive;
	///AccountID
	TXTPAccountIDType	AccountID;
	///���׵�Ԫ��
	TXTPTraderIDType	PBU;
	///ClientType
	TXTPClientTypeType	ClientType;
};

///�����û�
struct CXTPSuperUserField
{
	///�û�����
	TXTPUserIDType	UserID;
	///�û�����
	TXTPUserNameType	UserName;
	///����
	TXTPPasswordType	Password;
	///�Ƿ��Ծ
	TXTPBoolType	IsActive;
};

///�����û�����Ȩ��
struct CXTPSuperUserFunctionField
{
	///�û�����
	TXTPUserIDType	UserID;
	///���ܴ���
	TXTPFunctionCodeType	FunctionCode;
};

///���͹�˾�û�
struct CXTPBrokerUserField
{
	///���͹�˾����
	TXTPBrokerIDType	BrokerID;
	///�û�����
	TXTPUserIDType	UserID;
	///�û�����
	TXTPUserNameType	UserName;
	///�û�����
	TXTPUserTypeType	UserType;
	///�Ƿ��Ծ
	TXTPBoolType	IsActive;
	///�Ƿ�ʹ������
	TXTPBoolType	IsUsingOTP;
};

///���͹�˾�û�����Ȩ��
struct CXTPBrokerUserFunctionField
{
	///���͹�˾����
	TXTPBrokerIDType	BrokerID;
	///�û�����
	TXTPUserIDType	UserID;
	///���͹�˾���ܴ���
	TXTPBrokerFunctionCodeType	BrokerFunctionCode;
};

///�ʽ��˻�
struct CXTPTradingAccountField
{
	///���͹�˾����
	TXTPBrokerIDType	BrokerID;
	///Ͷ�����ʺ�
	TXTPAccountIDType	AccountID;
	///�ϴ���Ѻ���
	TXTPMoneyType	PreMortgage;
	///�ϴ����ö��
	TXTPMoneyType	PreCredit;
	///�ϴδ���
	TXTPMoneyType	PreDeposit;
	///�ϴν���׼����
	TXTPMoneyType	PreBalance;
	///�ϴ�ռ�õı�֤��
	TXTPMoneyType	PreMargin;
	///��Ϣ����
	TXTPMoneyType	InterestBase;
	///��Ϣ����
	TXTPMoneyType	Interest;
	///�����
	TXTPMoneyType	Deposit;
	///������
	TXTPMoneyType	Withdraw;
	///����ı�֤��
	TXTPMoneyType	FrozenMargin;
	///������ʽ�
	TXTPMoneyType	FrozenCash;
	///�����������
	TXTPMoneyType	FrozenCommission;
	///��ǰ��֤���ܶ�
	TXTPMoneyType	CurrMargin;
	///�ʽ���
	TXTPMoneyType	CashIn;
	///������
	TXTPMoneyType	Commission;
	///����׼����
	TXTPMoneyType	Balance;
	///�ֽ�
	TXTPMoneyType	Available;
	///��ȡ�ʽ�
	TXTPMoneyType	WithdrawQuota;
	///����׼����
	TXTPMoneyType	Reserve;
	///������
	TXTPDateType	TradingDay;
	///��֤��������
	TXTPMoneyType	Credit;
	///��Ѻ���
	TXTPMoneyType	Mortgage;
	///��������֤��
	TXTPMoneyType	ExchangeMargin;
	///Ͷ���߽��֤��
	TXTPMoneyType	DeliveryMargin;
	///���������֤��
	TXTPMoneyType	ExchangeDeliveryMargin;
	///����Ĺ�����
	TXTPMoneyType	FrozenTransferFee;
	///�����ӡ��˰
	TXTPMoneyType	FrozenStampTax;
	///������
	TXTPMoneyType	TransferFee;
	///ӡ��˰
	TXTPMoneyType	StampTax;
	///������
	TXTPMoneyType	ConversionAmount;
	///���Ŷ��
	TXTPMoneyType	CreditAmount;
	///֤ȯ�ܼ�ֵ
	TXTPMoneyType	StockValue;
	///��ծ�ع�ռ���ʽ�
	TXTPMoneyType	BondRepurchaseAmount;
	///��ծ��ع�ռ���ʽ�
	TXTPMoneyType	ReverseRepurchaseAmount;
	///����
	TXTPCurrencyCodeType	CurrencyCode;
	///�˻�����
	TXTPAccountTypeType	AccountType;
	///����������
	TXTPMoneyType	MarginTradeAmount;
	///��ȯ�������
	TXTPMoneyType	ShortSellAmount;
	///���ʳֲ�ӯ��
	TXTPMoneyType	MarginTradeProfit;
	///��ȯ�ֲ�ӯ��
	TXTPMoneyType	ShortSellProfit;
	///��ȯ����ֵ
	TXTPMoneyType	SSStockValue;
	///ά�ֵ�������
	TXTPRatioType	CreditRatio;
	///��Ȩ�����ʽ�
	TXTPMoneyType	FrozenExecCash;
	///��Ȩ�����ʽ�(SSE)
	TXTPMoneyType	SSEOptionsBuyAmount;
	///��Ȩ���붳���ʽ�(SSE)
	TXTPMoneyType	SSEOptionsBuyFrozenAmount;
	///���㱣֤���ܶ�
	TXTPMoneyType	SettleMargin;
};

///��ֹ��¼�û�
struct CXTPLoginForbiddenUserField
{
	///���͹�˾����
	TXTPBrokerIDType	BrokerID;
	///�û�����
	TXTPUserIDType	UserID;
};

///Ͷ���ߺ�Լ����Ȩ��
struct CXTPInstrumentTradingRightField
{
	///��Լ����
	TXTPInstrumentIDType	InstrumentID;
	///Ͷ���߷�Χ
	TXTPInvestorRangeType	InvestorRange;
	///���͹�˾����
	TXTPBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TXTPInvestorIDType	InvestorID;
	///����
	TXTPDirectionType	Direction;
	///����Ȩ��
	TXTPTradingRightType	TradingRight;
	///����������
	TXTPExchangeIDType	ExchangeID;
	///��ƱȨ�޷���
	TXTPInstrumentRangeType	InstrumentRange;
};

///Ͷ���ֲ߳���ϸ
struct CXTPInvestorPositionDetailField
{
	///��Լ����
	TXTPInstrumentIDType	InstrumentID;
	///���͹�˾����
	TXTPBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TXTPInvestorIDType	InvestorID;
	///Ͷ���ױ���־
	TXTPHedgeFlagType	HedgeFlag;
	///����
	TXTPDirectionType	Direction;
	///��������
	TXTPDateType	OpenDate;
	///�ɽ����
	TXTPTradeIDType	TradeID;
	///����
	TXTPVolumeType	Volume;
	///���ּ�
	TXTPPriceType	OpenPrice;
	///������
	TXTPDateType	TradingDay;
	///�ɽ�����
	TXTPTradeTypeType	TradeType;
	///����������
	TXTPExchangeIDType	ExchangeID;
	///Ͷ���߱�֤��
	TXTPMoneyType	Margin;
	///��������֤��
	TXTPMoneyType	ExchMargin;
	///������
	TXTPPriceType	LastSettlementPrice;
	///�����
	TXTPPriceType	SettlementPrice;
	///ƽ����
	TXTPVolumeType	CloseVolume;
	///ƽ�ֽ��
	TXTPMoneyType	CloseAmount;
	///������
	TXTPMoneyType	TransferFee;
	///ӡ��˰
	TXTPMoneyType	StampTax;
	///������
	TXTPMoneyType	Commission;
	///AccountID
	TXTPAccountIDType	AccountID;
	///��Ѻ�������
	TXTPVolumeType	PledgeInPosition;
	///��Ѻ��ⶳ������
	TXTPVolumeType	PledgeInFrozenPosition;
	///���ع�ʹ�õı�׼ȯ����
	TXTPVolumeType	RepurchasePosition;
	///������ȯ���
	TXTPMoneyType	Amount;
	///��ĺ�Լ����
	TXTPInstrumentIDType	UnderlyingInstrumentID;
};

///ծȯ��Ϣ
struct CXTPBondInterestField
{
	///������
	TXTPDateType	TradingDay;
	///����������
	TXTPExchangeIDType	ExchangeID;
	///��Լ����
	TXTPInstrumentIDType	InstrumentID;
	///��Ϣ
	TXTPInterestType	Interest;
};

///��ֵ������Ϣ
struct CXTPMarketRationInfoField
{
	///���͹�˾����
	TXTPBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TXTPInvestorIDType	InvestorID;
	///����������
	TXTPExchangeIDType	ExchangeID;
	///����������
	TXTPVolumeType	RationVolume;
};

///��Լ��������
struct CXTPInstrumentCommissionRateField
{
	///����������
	TXTPExchangeIDType	ExchangeID;
	///��Լ����
	TXTPInstrumentIDType	InstrumentID;
	///Ͷ���߷�Χ
	TXTPInvestorRangeType	InvestorRange;
	///���͹�˾����
	TXTPBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TXTPInvestorIDType	InvestorID;
	///��������
	TXTPDirectionType	Direction;
	///ӡ��˰��
	TXTPRatioType	StampTaxRateByMoney;
	///ӡ��˰��(������)
	TXTPRatioType	StampTaxRateByVolume;
	///��������
	TXTPRatioType	TransferFeeRateByMoney;
	///��������(������)
	TXTPRatioType	TransferFeeRateByVolume;
	///���׷�
	TXTPRatioType	TradeFeeByMoney;
	///���׷�(������)
	TXTPRatioType	TradeFeeByVolume;
	///���׸��ӷ���
	TXTPRatioType	MarginByMoney;
	///��С���׷�
	TXTPPriceType	MinTradeFee;
};

///��ȯ��Ϣ
struct CXTPExcessStockInfoField
{
	///���͹�˾����
	TXTPBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TXTPInvestorIDType	InvestorID;
	///����������
	TXTPExchangeIDType	ExchangeID;
	///��Լ����
	TXTPInstrumentIDType	InstrumentID;
	///��ȯ����
	TXTPVolumeType	ExcessVolume;
	///��ȯ��������
	TXTPVolumeType	ExcessFrozenVolume;
};

///ETF��Լ
struct CXTPETFInstrumentField
{
	///����������
	TXTPExchangeIDType	ExchangeID;
	///ETF֤ȯ����
	TXTPInstrumentIDType	ETFInstrumentID;
	///ETF��Ӧ�������
	TXTPInstrumentIDType	ETFPurRedInstrumentID;
	///��С�깺��ص�λ��Ӧ��ETF����
	TXTPVolumeType	CreationRedemptionUnit;
	///����ֽ��������
	TXTPRatioType	Maxcashratio;
	///�������깺���״̬
	TXTPCreationredemptionStatusType	Creationredemption;
	///Ԥ�����
	TXTPMoneyType	EstimateCashComponent;
};

///ETF��Ʊ��
struct CXTPETFBasketField
{
	///����������
	TXTPExchangeIDType	ExchangeID;
	///ETF֤ȯ����
	TXTPInstrumentIDType	ETFInstrumentID;
	///��Ʊ֤ȯ����
	TXTPInstrumentIDType	StockInstrumentID;
	///��Ʊ֤ȯ����
	TXTPInstrumentNameType	StockInstrumentName;
	///��Ʊ����
	TXTPVolumeType	Volume;
	///�����־
	TXTPETFCurrenceReplaceStatusType	CurrenceReplaceStatus;
	///��۱���
	TXTPRatioType	Premium;
	///�ܽ��
	TXTPMoneyType	Amount;
};

///OF��Լ
struct CXTPOFInstrumentField
{
	///����������
	TXTPExchangeIDType	ExchangeID;
	///OF�������
	TXTPInstrumentIDType	InstrumentID;
	///�������깺���״̬
	TXTPCreationredemptionStatusType	Creationredemption;
	///����ֵ
	TXTPPriceType	NetPrice;
};

///SF��Լ
struct CXTPSFInstrumentField
{
	///����������
	TXTPExchangeIDType	ExchangeID;
	///�������
	TXTPInstrumentIDType	InstrumentID;
	///SF�������
	TXTPInstrumentIDType	SFInstrumentID;
	///�������ֺϲ�״̬
	TXTPSplitMergeStatusType	SplitMergeStatus;
	///��С�������
	TXTPVolumeType	MinSplitVolume;
	///��С�ϲ�����
	TXTPVolumeType	MinMergeVolume;
	///���/�ϲ�����
	TXTPVolumeType	VolumeRatio;
	///����ֵ
	TXTPPriceType	NetPrice;
};

///��Լ���ֱ�֤��
struct CXTPInstrumentUnitMarginField
{
	///���͹�˾����
	TXTPBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TXTPInvestorIDType	InvestorID;
	///����������
	TXTPExchangeIDType	ExchangeID;
	///��Լ����
	TXTPInstrumentIDType	InstrumentID;
	///��Լ���ֱ�֤��
	TXTPMoneyType	UnitMargin;
};

///��Ȩ�ʽ����Ʋ���
struct CXTPOptionsFundLimitParamField
{
	///���͹�˾����
	TXTPBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TXTPInvestorIDType	InvestorID;
	///����������
	TXTPExchangeIDType	ExchangeID;
	///��������
	TXTPMoneyType	MaxBuyAmount;
};

///Ͷ������Ȩ�ֲ�
struct CXTPInvestorOptionsPositionField
{
	///���͹�˾����
	TXTPBrokerIDType	BrokerID;
	///Ͷ���߷�Χ
	TXTPInvestorRangeType	InvestorRange;
	///Ͷ���ߴ���
	TXTPInvestorIDType	InvestorID;
	///����������
	TXTPExchangeIDType	ExchangeID;
	///InstrumentID
	TXTPInstrumentIDType	InstrumentID;
	///����ͷ��λ����
	TXTPVolumeType	MaxLongPositionLimit;
	///�����������
	TXTPVolumeType	MaxBuyVolLimit;
	///����ܲ�λ����
	TXTPVolumeType	MaxPositionLimit;
	///��ͷ�ֲ�
	TXTPVolumeType	LongPosition;
	///��ͷ�ֲ�
	TXTPVolumeType	ShortPosition;
	///����
	TXTPVolumeType	BuyVolume;
	///�򿪶�����
	TXTPVolumeType	BuyFrozenVolume;
	///��ͷ����ֲ�
	TXTPVolumeType	LongFrozenPosition;
	///��ͷ����ֲ�
	TXTPVolumeType	ShortFrozenPosition;
};

///Ԥ������Ϣ
struct CXTPPreDelivInfoField
{
	///���͹�˾����
	TXTPBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TXTPInvestorIDType	InvestorID;
	///����������
	TXTPExchangeIDType	ExchangeID;
	///��Լ����
	TXTPInstrumentIDType	InstrumentID;
	///��������
	TXTPDelivTypeType	DelivType;
	///��ĺ�Լ����
	TXTPInstrumentIDType	UnderlyingInstrumentID;
	///��������
	TXTPVolumeType	DelivVolume;
	///������
	TXTPMoneyType	DelivAmount;
	///��Ȩִ������
	TXTPVolumeType	ExecVolume;
	///��������
	TXTPDirectionType	Direction;
};

///����ȯ������Ϣ
struct CXTPCreditStockAssignInfoField
{
	///���͹�˾����
	TXTPBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TXTPInvestorIDType	InvestorID;
	///����������
	TXTPExchangeIDType	ExchangeID;
	///��Լ����
	TXTPInstrumentIDType	InstrumentID;
	///��ȯ����
	TXTPVolumeType	LimitVolume;
	///������ȯ����
	TXTPVolumeType	YDVolume;
	///ʣ�����ȯ����
	TXTPVolumeType	LeftVolume;
	///������ȯ����
	TXTPVolumeType	FrozenVolume;
};

///�����ʷ�����Ϣ
struct CXTPCreditCashAssignInfoField
{
	///���͹�˾����
	TXTPBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TXTPInvestorIDType	InvestorID;
	///�����޶�
	TXTPMoneyType	LimitAmount;
	///�������ʽ��
	TXTPMoneyType	YDAmount;
};

///֤ȯ������
struct CXTPConversionRateField
{
	///����������
	TXTPExchangeIDType	ExchangeID;
	///��Լ����
	TXTPInstrumentIDType	InstrumentID;
	///�������
	TXTPRatioType	ConversionRate;
	///��ǰ�Ƿ�֧�����ʽ���
	TXTPBoolType	IsTradingForMargin;
	///��ǰ�Ƿ�֧����ȯ����
	TXTPBoolType	IsTradingForShort;
};

///��ʷ���ø�ծ��Ϣ
struct CXTPHisCreditDebtInfoField
{
	///���͹�˾����
	TXTPBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TXTPInvestorIDType	InvestorID;
	///����������
	TXTPExchangeIDType	ExchangeID;
	///��Լ����
	TXTPInstrumentIDType	InstrumentID;
	///��������
	TXTPDateType	OpenDate;
	///��ծ����
	TXTPDirectionType	Direction;
	///���ּ�
	TXTPPriceType	OpenPrice;
	///����
	TXTPVolumeType	Volume;
	///������ȯ���
	TXTPMoneyType	Amount;
};

///����������Ա���̻�
struct CXTPTraderOfferField
{
	///����������
	TXTPExchangeIDType	ExchangeID;
	///����������Ա����
	TXTPTraderIDType	BranchPBU;
	///��Ա����
	TXTPParticipantIDType	ParticipantID;
	///����
	TXTPPasswordType	Password;
	///��װ���
	TXTPInstallIDType	InstallID;
	///���ر������
	TXTPOrderLocalIDType	OrderLocalID;
	///����������Ա����״̬
	TXTPTraderConnectStatusType	TraderConnectStatus;
	///�����������������
	TXTPDateType	ConnectRequestDate;
	///�������������ʱ��
	TXTPTimeType	ConnectRequestTime;
	///�ϴα�������
	TXTPDateType	LastReportDate;
	///�ϴα���ʱ��
	TXTPTimeType	LastReportTime;
	///�����������
	TXTPDateType	ConnectDate;
	///�������ʱ��
	TXTPTimeType	ConnectTime;
	///��������
	TXTPDateType	StartDate;
	///����ʱ��
	TXTPTimeType	StartTime;
	///������
	TXTPDateType	TradingDay;
	///���͹�˾����
	TXTPBrokerIDType	BrokerID;
};

///���������鱨�̻�
struct CXTPMDTraderOfferField
{
	///����������
	TXTPExchangeIDType	ExchangeID;
	///����������Ա����
	TXTPTraderIDType	BranchPBU;
	///��Ա����
	TXTPParticipantIDType	ParticipantID;
	///����
	TXTPPasswordType	Password;
	///��װ���
	TXTPInstallIDType	InstallID;
	///���ر������
	TXTPOrderLocalIDType	OrderLocalID;
	///����������Ա����״̬
	TXTPTraderConnectStatusType	TraderConnectStatus;
	///�����������������
	TXTPDateType	ConnectRequestDate;
	///�������������ʱ��
	TXTPTimeType	ConnectRequestTime;
	///�ϴα�������
	TXTPDateType	LastReportDate;
	///�ϴα���ʱ��
	TXTPTimeType	LastReportTime;
	///�����������
	TXTPDateType	ConnectDate;
	///�������ʱ��
	TXTPTimeType	ConnectTime;
	///��������
	TXTPDateType	StartDate;
	///����ʱ��
	TXTPTimeType	StartTime;
	///������
	TXTPDateType	TradingDay;
	///���͹�˾����
	TXTPBrokerIDType	BrokerID;
};

///ǰ��״̬
struct CXTPFrontStatusField
{
	///ǰ�ñ��
	TXTPFrontIDType	FrontID;
	///�ϴα�������
	TXTPDateType	LastReportDate;
	///�ϴα���ʱ��
	TXTPTimeType	LastReportTime;
	///�Ƿ��Ծ
	TXTPBoolType	IsActive;
};

///�û��Ự
struct CXTPUserSessionField
{
	///ǰ�ñ��
	TXTPFrontIDType	FrontID;
	///�Ự���
	TXTPSessionIDType	SessionID;
	///���͹�˾����
	TXTPBrokerIDType	BrokerID;
	///�û�����
	TXTPUserIDType	UserID;
	///��¼����
	TXTPDateType	LoginDate;
	///��¼ʱ��
	TXTPTimeType	LoginTime;
	///IP��ַ
	TXTPIPAddressType	IPAddress;
	///�û��˲�Ʒ��Ϣ
	TXTPProductInfoType	UserProductInfo;
	///�ӿڶ˲�Ʒ��Ϣ
	TXTPProductInfoType	InterfaceProductInfo;
	///Э����Ϣ
	TXTPProtocolInfoType	ProtocolInfo;
	///Mac��ַ
	TXTPMacAddressType	MacAddress;
};

///����
struct CXTPOrderField
{
	///���͹�˾����
	TXTPBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TXTPInvestorIDType	InvestorID;
	///��Լ����
	TXTPInstrumentIDType	InstrumentID;
	///��������
	TXTPOrderRefType	OrderRef;
	///�û�����
	TXTPUserIDType	UserID;
	///����������
	TXTPExchangeIDType	ExchangeID;
	///�����۸�����
	TXTPOrderPriceTypeType	OrderPriceType;
	///��������
	TXTPDirectionType	Direction;
	///��Ͽ�ƽ��־
	TXTPCombOffsetFlagType	CombOffsetFlag;
	///���Ͷ���ױ���־
	TXTPCombHedgeFlagType	CombHedgeFlag;
	///�۸�
	TXTPStockPriceType	LimitPrice;
	///����
	TXTPVolumeType	VolumeTotalOriginal;
	///��Ч������
	TXTPTimeConditionType	TimeCondition;
	///GTD����
	TXTPDateType	GTDDate;
	///�ɽ�������
	TXTPVolumeConditionType	VolumeCondition;
	///��С�ɽ���
	TXTPVolumeType	MinVolume;
	///��������
	TXTPContingentConditionType	ContingentCondition;
	///ֹ���
	TXTPPriceType	StopPrice;
	///ǿƽԭ��
	TXTPForceCloseReasonType	ForceCloseReason;
	///�Զ������־
	TXTPBoolType	IsAutoSuspend;
	///ҵ��Ԫ
	TXTPBusinessUnitType	BusinessUnit;
	///������
	TXTPRequestIDType	RequestID;
	///���ر������
	TXTPOrderLocalIDType	OrderLocalID;
	///��Ա����
	TXTPParticipantIDType	ParticipantID;
	///�ͻ�����
	TXTPClientIDType	ClientID;
	///��Լ�ڽ������Ĵ���
	TXTPExchangeInstIDType	ExchangeInstID;
	///����������Ա����
	TXTPTraderIDType	BranchPBU;
	///��װ���
	TXTPInstallIDType	InstallID;
	///�����ύ״̬
	TXTPOrderSubmitStatusType	OrderSubmitStatus;
	///�˻�����
	TXTPAccountIDType	AccountID;
	///������ʾ���
	TXTPSequenceNoType	NotifySequence;
	///������
	TXTPDateType	TradingDay;
	///�������
	TXTPOrderSysIDType	OrderSysID;
	///������Դ
	TXTPOrderSourceType	OrderSource;
	///����״̬
	TXTPOrderStatusType	OrderStatus;
	///��������
	TXTPOrderTypeType	OrderType;
	///��ɽ�����
	TXTPVolumeType	VolumeTraded;
	///ʣ������
	TXTPVolumeType	VolumeTotal;
	///��������
	TXTPDateType	InsertDate;
	///ί��ʱ��
	TXTPTimeType	InsertTime;
	///����ʱ��
	TXTPTimeType	ActiveTime;
	///����ʱ��
	TXTPTimeType	SuspendTime;
	///����޸�ʱ��
	TXTPTimeType	UpdateTime;
	///����ʱ��
	TXTPTimeType	CancelTime;
	///����޸Ľ���������Ա����
	TXTPTraderIDType	ActiveTraderID;
	///�����Ա���
	TXTPParticipantIDType	ClearingPartID;
	///���
	TXTPSequenceNoType	SequenceNo;
	///ǰ�ñ��
	TXTPFrontIDType	FrontID;
	///�Ự���
	TXTPSessionIDType	SessionID;
	///�û��˲�Ʒ��Ϣ
	TXTPProductInfoType	UserProductInfo;
	///״̬��Ϣ
	TXTPErrorMsgType	StatusMsg;
	///�û�ǿƽ��־
	TXTPBoolType	UserForceClose;
	///�����û�����
	TXTPUserIDType	ActiveUserID;
	///���͹�˾�������
	TXTPSequenceNoType	BrokerOrderSeq;
	///��ر���
	TXTPOrderSysIDType	RelativeOrderSysID;
	///Ӫҵ�����
	TXTPBranchIDType	BranchID;
	///�ɽ�����
	TXTPMoneyType	TradeAmount;
	///�Ƿ�ETF
	TXTPBoolType	IsETF;
	///��Լ����
	TXTPInstrumentTypeType	InstrumentType;
};

///��������
struct CXTPOrderActionField
{
	///���͹�˾����
	TXTPBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TXTPInvestorIDType	InvestorID;
	///������������
	TXTPOrderActionRefType	OrderActionRef;
	///��������
	TXTPOrderRefType	OrderRef;
	///������
	TXTPRequestIDType	RequestID;
	///ǰ�ñ��
	TXTPFrontIDType	FrontID;
	///�Ự���
	TXTPSessionIDType	SessionID;
	///����������
	TXTPExchangeIDType	ExchangeID;
	///������־
	TXTPActionFlagType	ActionFlag;
	///�۸�
	TXTPPriceType	LimitPrice;
	///�����仯
	TXTPVolumeType	VolumeChange;
	///��������
	TXTPDateType	ActionDate;
	///����ʱ��
	TXTPTimeType	ActionTime;
	///����������Ա����
	TXTPTraderIDType	BranchPBU;
	///��װ���
	TXTPInstallIDType	InstallID;
	///���ر������
	TXTPOrderLocalIDType	OrderLocalID;
	///�������ر��
	TXTPOrderLocalIDType	ActionLocalID;
	///��Ա����
	TXTPParticipantIDType	ParticipantID;
	///�ͻ�����
	TXTPClientIDType	ClientID;
	///ҵ��Ԫ
	TXTPBusinessUnitType	BusinessUnit;
	///��������״̬
	TXTPOrderActionStatusType	OrderActionStatus;
	///�û�����
	TXTPUserIDType	UserID;
	///Ӫҵ�����
	TXTPBranchIDType	BranchID;
	///״̬��Ϣ
	TXTPErrorMsgType	StatusMsg;
	///��Լ����
	TXTPInstrumentIDType	InstrumentID;
	///��Լ����
	TXTPInstrumentTypeType	InstrumentType;
};

///���󱨵�
struct CXTPErrOrderField
{
	///���͹�˾����
	TXTPBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TXTPInvestorIDType	InvestorID;
	///��Լ����
	TXTPInstrumentIDType	InstrumentID;
	///��������
	TXTPOrderRefType	OrderRef;
	///�û�����
	TXTPUserIDType	UserID;
	///����������
	TXTPExchangeIDType	ExchangeID;
	///�����۸�����
	TXTPOrderPriceTypeType	OrderPriceType;
	///��������
	TXTPDirectionType	Direction;
	///��Ͽ�ƽ��־
	TXTPCombOffsetFlagType	CombOffsetFlag;
	///���Ͷ���ױ���־
	TXTPCombHedgeFlagType	CombHedgeFlag;
	///�۸�
	TXTPStockPriceType	LimitPrice;
	///����
	TXTPVolumeType	VolumeTotalOriginal;
	///��Ч������
	TXTPTimeConditionType	TimeCondition;
	///GTD����
	TXTPDateType	GTDDate;
	///�ɽ�������
	TXTPVolumeConditionType	VolumeCondition;
	///��С�ɽ���
	TXTPVolumeType	MinVolume;
	///��������
	TXTPContingentConditionType	ContingentCondition;
	///ֹ���
	TXTPPriceType	StopPrice;
	///ǿƽԭ��
	TXTPForceCloseReasonType	ForceCloseReason;
	///�Զ������־
	TXTPBoolType	IsAutoSuspend;
	///ҵ��Ԫ
	TXTPBusinessUnitType	BusinessUnit;
	///������
	TXTPRequestIDType	RequestID;
	///�û�ǿƽ��־
	TXTPBoolType	UserForceClose;
	///�������
	TXTPErrorIDType	ErrorID;
	///������Ϣ
	TXTPErrorMsgType	ErrorMsg;
};

///���󱨵�����
struct CXTPErrOrderActionField
{
	///���͹�˾����
	TXTPBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TXTPInvestorIDType	InvestorID;
	///������������
	TXTPOrderActionRefType	OrderActionRef;
	///��������
	TXTPOrderRefType	OrderRef;
	///������
	TXTPRequestIDType	RequestID;
	///ǰ�ñ��
	TXTPFrontIDType	FrontID;
	///�Ự���
	TXTPSessionIDType	SessionID;
	///����������
	TXTPExchangeIDType	ExchangeID;
	///������־
	TXTPActionFlagType	ActionFlag;
	///�۸�
	TXTPPriceType	LimitPrice;
	///�����仯
	TXTPVolumeType	VolumeChange;
	///��������
	TXTPDateType	ActionDate;
	///����ʱ��
	TXTPTimeType	ActionTime;
	///����������Ա����
	TXTPTraderIDType	BranchPBU;
	///��װ���
	TXTPInstallIDType	InstallID;
	///���ر������
	TXTPOrderLocalIDType	OrderLocalID;
	///�������ر��
	TXTPOrderLocalIDType	ActionLocalID;
	///��Ա����
	TXTPParticipantIDType	ParticipantID;
	///�ͻ�����
	TXTPClientIDType	ClientID;
	///ҵ��Ԫ
	TXTPBusinessUnitType	BusinessUnit;
	///��������״̬
	TXTPOrderActionStatusType	OrderActionStatus;
	///�û�����
	TXTPUserIDType	UserID;
	///Ӫҵ�����
	TXTPBranchIDType	BranchID;
	///״̬��Ϣ
	TXTPErrorMsgType	StatusMsg;
	///��Լ����
	TXTPInstrumentIDType	InstrumentID;
	///�������
	TXTPErrorIDType	ErrorID;
	///������Ϣ
	TXTPErrorMsgType	ErrorMsg;
	///��Լ����
	TXTPInstrumentTypeType	InstrumentType;
};

///�ɽ�
struct CXTPTradeField
{
	///���͹�˾����
	TXTPBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TXTPInvestorIDType	InvestorID;
	///��Լ����
	TXTPInstrumentIDType	InstrumentID;
	///��������
	TXTPOrderRefType	OrderRef;
	///�û�����
	TXTPUserIDType	UserID;
	///����������
	TXTPExchangeIDType	ExchangeID;
	///�ɽ����
	TXTPTradeIDType	TradeID;
	///��������
	TXTPDirectionType	Direction;
	///�������
	TXTPOrderSysIDType	OrderSysID;
	///��Ա����
	TXTPParticipantIDType	ParticipantID;
	///�ͻ�����
	TXTPClientIDType	ClientID;
	///���׽�ɫ
	TXTPTradingRoleType	TradingRole;
	///��Լ�ڽ������Ĵ���
	TXTPExchangeInstIDType	ExchangeInstID;
	///��ƽ��־
	TXTPOffsetFlagType	OffsetFlag;
	///Ͷ���ױ���־
	TXTPHedgeFlagType	HedgeFlag;
	///�۸�
	TXTPStockPriceType	Price;
	///����
	TXTPVolumeType	Volume;
	///�ɽ�ʱ��
	TXTPDateType	TradeDate;
	///�ɽ�ʱ��
	TXTPTimeType	TradeTime;
	///�ɽ�����
	TXTPTradeTypeType	TradeType;
	///�ɽ�����Դ
	TXTPPriceSourceType	PriceSource;
	///����������Ա����
	TXTPTraderIDType	BranchPBU;
	///���ر������
	TXTPOrderLocalIDType	OrderLocalID;
	///�����Ա���
	TXTPParticipantIDType	ClearingPartID;
	///ҵ��Ԫ
	TXTPBusinessUnitType	BusinessUnit;
	///���
	TXTPSequenceNoType	SequenceNo;
	///�ɽ���Դ
	TXTPTradeSourceType	TradeSource;
	///������
	TXTPDateType	TradingDay;
	///���͹�˾�������
	TXTPSequenceNoType	BrokerOrderSeq;
	///�ɽ����
	TXTPMoneyType	TradeAmount;
	///�ɽ����
	TXTPTradeIndexType	TradeIndex;
};

///Ͷ���ֲ߳�
struct CXTPInvestorPositionField
{
	///��Լ����
	TXTPInstrumentIDType	InstrumentID;
	///���͹�˾����
	TXTPBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TXTPInvestorIDType	InvestorID;
	///�ֲֶ�շ���
	TXTPPosiDirectionType	PosiDirection;
	///Ͷ���ױ���־
	TXTPHedgeFlagType	HedgeFlag;
	///�ֲ�����
	TXTPPositionDateType	PositionDate;
	///���ճֲ�
	TXTPVolumeType	YdPosition;
	///�ֲܳ�
	TXTPVolumeType	Position;
	///��ͷ����
	TXTPVolumeType	LongFrozen;
	///��ͷ����
	TXTPVolumeType	ShortFrozen;
	///���ֶ�����
	TXTPMoneyType	LongFrozenAmount;
	///���ֶ�����
	TXTPMoneyType	ShortFrozenAmount;
	///������
	TXTPVolumeType	OpenVolume;
	///ƽ����
	TXTPVolumeType	CloseVolume;
	///���ֽ��
	TXTPMoneyType	OpenAmount;
	///ƽ�ֽ��
	TXTPMoneyType	CloseAmount;
	///�ֲֳɱ�
	TXTPMoneyType	PositionCost;
	///������ʽ�
	TXTPMoneyType	FrozenCash;
	///�ʽ���
	TXTPMoneyType	CashIn;
	///������
	TXTPMoneyType	Commission;
	///�ϴν����
	TXTPPriceType	PreSettlementPrice;
	///���ν����
	TXTPPriceType	SettlementPrice;
	///������
	TXTPDateType	TradingDay;
	///���ֳɱ�
	TXTPMoneyType	OpenCost;
	///��������֤��
	TXTPMoneyType	ExchangeMargin;
	///���ճֲ�
	TXTPVolumeType	TodayPosition;
	///������
	TXTPMoneyType	TransferFee;
	///ӡ��˰
	TXTPMoneyType	StampTax;
	///�����깺�������
	TXTPVolumeType	TodayPurRedVolume;
	///������
	TXTPRatioType	ConversionRate;
	///������
	TXTPMoneyType	ConversionAmount;
	///֤ȯ��ֵ
	TXTPMoneyType	StockValue;
	///����������
	TXTPExchangeIDType	ExchangeID;
	///AccountID
	TXTPAccountIDType	AccountID;
	///��Ѻ�������
	TXTPVolumeType	PledgeInPosition;
	///���ع�ʹ�õı�׼ȯ����
	TXTPVolumeType	RepurchasePosition;
	///ETF�����ͷ����
	TXTPVolumeType	PurRedShortFrozen;
	///������������
	TXTPVolumeType	MarginTradeVolume;
	///����������
	TXTPMoneyType	MarginTradeAmount;
	///�������붳������
	TXTPVolumeType	MarginTradeFrozenVolume;
	///�������붳����
	TXTPMoneyType	MarginTradeFrozenAmount;
	///��������ӯ��
	TXTPMoneyType	MarginTradeConversionProfit;
	///��ȯ��������
	TXTPVolumeType	ShortSellVolume;
	///��ȯ�������
	TXTPMoneyType	ShortSellAmount;
	///��ȯ������������
	TXTPVolumeType	ShortSellFrozenVolume;
	///��ȯ����������
	TXTPMoneyType	ShortSellFrozenAmount;
	///��ȯ����ӯ��
	TXTPMoneyType	ShortSellConversionProfit;
	///��ȯ����ֵ
	TXTPMoneyType	SSStockValue;
	///�������ʳֲ�
	TXTPVolumeType	TodayMTPosition;
	///������ȯ�ֲ�
	TXTPVolumeType	TodaySSPosition;
	///��ʷ�ֲֿ��ֳɱ�
	TXTPMoneyType	YdOpenCost;
	///������λ
	TXTPVolumeType	LockPosition;
	///���Ҳ�λ
	TXTPVolumeType	CoverPosition;
	///���������λ
	TXTPVolumeType	LockFrozenPosition;
	///���������λ
	TXTPVolumeType	UnlockFrozenPosition;
	///���Ҷ����λ
	TXTPVolumeType	CoverFrozenPosition;
	///��Ȩ�����λ
	TXTPVolumeType	ExecFrozenPosition;
	///���ձ��Ҳ�λ
	TXTPVolumeType	YDCoverPosition;
};

///�����ͬ��
struct CXTPSyncDepositField
{
	///�������ˮ��
	TXTPDepositSeqNoType	DepositSeqNo;
	///���͹�˾����
	TXTPBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TXTPInvestorIDType	InvestorID;
	///�����
	TXTPMoneyType	Deposit;
	///�Ƿ�ǿ�ƽ���
	TXTPBoolType	IsForce;
	///�˻���
	TXTPAccountIDType	AccountID;
};

///��ѯ������
struct CXTPQryExchangeField
{
	///����������
	TXTPExchangeIDType	ExchangeID;
};

///��ѯ��Ʒ
struct CXTPQryProductField
{
	///��Ʒ����
	TXTPInstrumentIDType	ProductID;
};

///��ѯ��Լ
struct CXTPQryInstrumentField
{
	///��Լ����
	TXTPInstrumentIDType	InstrumentID;
	///����������
	TXTPExchangeIDType	ExchangeID;
	///��Լ�ڽ������Ĵ���
	TXTPExchangeInstIDType	ExchangeInstID;
	///��Ʒ����
	TXTPInstrumentIDType	ProductID;
};

///��ѯ���͹�˾
struct CXTPQryBrokerField
{
	///���͹�˾����
	TXTPBrokerIDType	BrokerID;
};

///��ѯ���͹�˾��Ա����
struct CXTPQryPartBrokerField
{
	///����������
	TXTPExchangeIDType	ExchangeID;
	///���͹�˾����
	TXTPBrokerIDType	BrokerID;
	///��Ա����
	TXTPParticipantIDType	ParticipantID;
};

///��ѯͶ����
struct CXTPQryInvestorField
{
	///���͹�˾����
	TXTPBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TXTPInvestorIDType	InvestorID;
};

///��ѯ���ױ���
struct CXTPQryTradingCodeField
{
	///���͹�˾����
	TXTPBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TXTPInvestorIDType	InvestorID;
	///����������
	TXTPExchangeIDType	ExchangeID;
	///�ͻ�����
	TXTPClientIDType	ClientID;
};

///��ѯ�����û�
struct CXTPQrySuperUserField
{
	///�û�����
	TXTPUserIDType	UserID;
};

///��ѯ�����û�����Ȩ��
struct CXTPQrySuperUserFunctionField
{
	///�û�����
	TXTPUserIDType	UserID;
};

///��ѯ���͹�˾�û�
struct CXTPQryBrokerUserField
{
	///���͹�˾����
	TXTPBrokerIDType	BrokerID;
	///�û�����
	TXTPUserIDType	UserID;
};

///��ѯ���͹�˾�û�Ȩ��
struct CXTPQryBrokerUserFunctionField
{
	///���͹�˾����
	TXTPBrokerIDType	BrokerID;
	///�û�����
	TXTPUserIDType	UserID;
};

///��ѯ�ʽ��˻�
struct CXTPQryTradingAccountField
{
	///���͹�˾����
	TXTPBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TXTPInvestorIDType	InvestorID;
};

///��ѯ��ֹ��¼�û�
struct CXTPQryLoginForbiddenUserField
{
	///���͹�˾����
	TXTPBrokerIDType	BrokerID;
	///�û�����
	TXTPUserIDType	UserID;
};

///��ѯ����
struct CXTPQryDepthMarketDataField
{
	///��Լ����
	TXTPInstrumentIDType	InstrumentID;
};

///��ѯ��Լ����Ȩ��
struct CXTPQryInstrumentTradingRightField
{
	///����������
	TXTPExchangeIDType	ExchangeID;
	///���͹�˾����
	TXTPBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TXTPInvestorIDType	InvestorID;
	///��Լ����
	TXTPInstrumentIDType	InstrumentID;
};

///��ѯͶ���ֲ߳���ϸ
struct CXTPQryInvestorPositionDetailField
{
	///���͹�˾����
	TXTPBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TXTPInvestorIDType	InvestorID;
	///��Լ����
	TXTPInstrumentIDType	InstrumentID;
};

///��ѯծȯ��Ϣ
struct CXTPQryBondInterestField
{
	///����������
	TXTPExchangeIDType	ExchangeID;
	///��Լ����
	TXTPInstrumentIDType	InstrumentID;
};

///��ѯ��ֵ������Ϣ
struct CXTPQryMarketRationInfoField
{
	///���͹�˾����
	TXTPBrokerIDType	BrokerID;
	///Ͷ�����ʺ�
	TXTPInvestorIDType	InvestorID;
	///����������
	TXTPExchangeIDType	ExchangeID;
};

///��ѯ��Լ��������
struct CXTPQryInstrumentCommissionRateField
{
	///����������
	TXTPExchangeIDType	ExchangeID;
	///���͹�˾����
	TXTPBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TXTPInvestorIDType	InvestorID;
	///��Լ����
	TXTPInstrumentIDType	InstrumentID;
	///��������
	TXTPDirectionType	Direction;
	///��ƽ��־
	TXTPOffsetFlagType	OffsetFlag;
};

///��ѯ��ȯ��Ϣ
struct CXTPQryExcessStockInfoField
{
	///���͹�˾����
	TXTPBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TXTPInvestorIDType	InvestorID;
	///����������
	TXTPExchangeIDType	ExchangeID;
	///��Լ����
	TXTPInstrumentIDType	InstrumentID;
};

///��ѯͶ�����ʻ���ϵ
struct CXTPQryInvestorAccountField
{
	///���͹�˾����
	TXTPBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TXTPInvestorIDType	InvestorID;
};

///��ѯETF��Լ
struct CXTPQryETFInstrumentField
{
	///����������
	TXTPExchangeIDType	ExchangeID;
	///ETF֤ȯ����
	TXTPInstrumentIDType	ETFInstrumentID;
};

///��ѯETF��Ʊ��
struct CXTPQryETFBasketField
{
	///����������
	TXTPExchangeIDType	ExchangeID;
	///ETF֤ȯ����
	TXTPInstrumentIDType	ETFInstrumentID;
};

///��ѯOF��Լ
struct CXTPQryOFInstrumentField
{
	///����������
	TXTPExchangeIDType	ExchangeID;
	///ETF֤ȯ����
	TXTPInstrumentIDType	OFInstrumentID;
};

///��ѯSF��Լ
struct CXTPQrySFInstrumentField
{
	///����������
	TXTPExchangeIDType	ExchangeID;
	///ETF֤ȯ����
	TXTPInstrumentIDType	SFInstrumentID;
};

///��ѯ��Լ���ֱ�֤��
struct CXTPQryInstrumentUnitMarginField
{
	///���͹�˾����
	TXTPBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TXTPInvestorIDType	InvestorID;
	///����������
	TXTPExchangeIDType	ExchangeID;
	///��Լ����
	TXTPInstrumentIDType	InstrumentID;
};

///��ѯ��Ȩ�ʽ����Ʋ���
struct CXTPQryOptionsFundLimitParamField
{
	///���͹�˾����
	TXTPBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TXTPInvestorIDType	InvestorID;
	///����������
	TXTPExchangeIDType	ExchangeID;
};

///��ѯͶ������Ȩ�ֲ�
struct CXTPQryInvestorOptionsPositionField
{
	///���͹�˾����
	TXTPBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TXTPInvestorIDType	InvestorID;
	///����������
	TXTPExchangeIDType	ExchangeID;
	///��ĺ�Լ����
	TXTPInstrumentIDType	InstrumentID;
};

///��ѯԤ������Ϣ
struct CXTPQryPreDelivInfoField
{
	///���͹�˾����
	TXTPBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TXTPInvestorIDType	InvestorID;
	///����������
	TXTPExchangeIDType	ExchangeID;
	///��Լ����
	TXTPInstrumentIDType	InstrumentID;
};

///��ѯ����ȯ������Ϣ
struct CXTPQryCreditStockAssignInfoField
{
	///���͹�˾����
	TXTPBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TXTPInvestorIDType	InvestorID;
	///����������
	TXTPExchangeIDType	ExchangeID;
	///��Լ����
	TXTPInstrumentIDType	InstrumentID;
};

///��ѯ�����ʷ�����Ϣ
struct CXTPQryCreditCashAssignInfoField
{
	///���͹�˾����
	TXTPBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TXTPInvestorIDType	InvestorID;
};

///��ѯ֤ȯ������
struct CXTPQryConversionRateField
{
	///����������
	TXTPExchangeIDType	ExchangeID;
	///��Լ����
	TXTPInstrumentIDType	InstrumentID;
};

///��ѯ��ʷ���ø�ծ��Ϣ
struct CXTPQryHisCreditDebtInfoField
{
	///���͹�˾����
	TXTPBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TXTPInvestorIDType	InvestorID;
	///����������
	TXTPExchangeIDType	ExchangeID;
	///��Լ����
	TXTPInstrumentIDType	InstrumentID;
};

///��ѯ����Ա���̻�
struct CXTPQryTraderOfferField
{
	///����������
	TXTPExchangeIDType	ExchangeID;
	///��Ա����
	TXTPParticipantIDType	ParticipantID;
	///����������Ա����
	TXTPTraderIDType	BranchPBU;
};

///��ѯ���鱨�̻�
struct CXTPQryMDTraderOfferField
{
	///����������
	TXTPExchangeIDType	ExchangeID;
	///��Ա����
	TXTPParticipantIDType	ParticipantID;
	///����������Ա����
	TXTPTraderIDType	BranchPBU;
};

///��ѯǰ��״̬
struct CXTPQryFrontStatusField
{
	///ǰ�ñ��
	TXTPFrontIDType	FrontID;
};

///��ѯ�û��Ự
struct CXTPQryUserSessionField
{
	///ǰ�ñ��
	TXTPFrontIDType	FrontID;
	///�Ự���
	TXTPSessionIDType	SessionID;
	///���͹�˾����
	TXTPBrokerIDType	BrokerID;
	///�û�����
	TXTPUserIDType	UserID;
};

///��ѯ����
struct CXTPQryOrderField
{
	///���͹�˾����
	TXTPBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TXTPInvestorIDType	InvestorID;
	///��Լ����
	TXTPInstrumentIDType	InstrumentID;
	///����������
	TXTPExchangeIDType	ExchangeID;
	///�������
	TXTPOrderSysIDType	OrderSysID;
	///��ʼʱ��
	TXTPTimeType	InsertTimeStart;
	///����ʱ��
	TXTPTimeType	InsertTimeEnd;
};

///��ѯ��������
struct CXTPQryOrderActionField
{
	///���͹�˾����
	TXTPBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TXTPInvestorIDType	InvestorID;
	///����������
	TXTPExchangeIDType	ExchangeID;
};

///��ѯ���󱨵�
struct CXTPQryErrOrderField
{
	///���͹�˾����
	TXTPBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TXTPInvestorIDType	InvestorID;
};

///��ѯ���󱨵�����
struct CXTPQryErrOrderActionField
{
	///���͹�˾����
	TXTPBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TXTPInvestorIDType	InvestorID;
};

///��ѯ�ɽ�
struct CXTPQryTradeField
{
	///���͹�˾����
	TXTPBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TXTPInvestorIDType	InvestorID;
	///��Լ����
	TXTPInstrumentIDType	InstrumentID;
	///����������
	TXTPExchangeIDType	ExchangeID;
	///�ɽ����
	TXTPTradeIDType	TradeID;
	///��ʼʱ��
	TXTPTimeType	TradeTimeStart;
	///����ʱ��
	TXTPTimeType	TradeTimeEnd;
};

///��ѯͶ���ֲ߳�
struct CXTPQryInvestorPositionField
{
	///���͹�˾����
	TXTPBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TXTPInvestorIDType	InvestorID;
	///��Լ����
	TXTPInstrumentIDType	InstrumentID;
};

///��ѯ�������ˮ
struct CXTPQrySyncDepositField
{
	///���͹�˾����
	TXTPBrokerIDType	BrokerID;
	///�������ˮ��
	TXTPDepositSeqNoType	DepositSeqNo;
};

///�û�������
struct CXTPUserPasswordUpdateField
{
	///���͹�˾����
	TXTPBrokerIDType	BrokerID;
	///�û�����
	TXTPUserIDType	UserID;
	///ԭ���Ŀ���
	TXTPPasswordType	OldPassword;
	///�µĿ���
	TXTPPasswordType	NewPassword;
};

///�ʽ��˻���������
struct CXTPTradingAccountPasswordUpdateField
{
	///���͹�˾����
	TXTPBrokerIDType	BrokerID;
	///Ͷ�����ʺ�
	TXTPAccountIDType	AccountID;
	///ԭ���Ŀ���
	TXTPPasswordType	OldPassword;
	///�µĿ���
	TXTPPasswordType	NewPassword;
};

///�ֹ�ͬ���û���̬����
struct CXTPManualSyncBrokerUserOTPField
{
	///���͹�˾����
	TXTPBrokerIDType	BrokerID;
	///�û�����
	TXTPUserIDType	UserID;
	///��̬��������
	TXTPOTPTypeType	OTPType;
	///��һ����̬����
	TXTPPasswordType	FirstOTP;
	///�ڶ�����̬����
	TXTPPasswordType	SecondOTP;
};

///���͹�˾�û�����
struct CXTPBrokerUserPasswordField
{
	///���͹�˾����
	TXTPBrokerIDType	BrokerID;
	///�û�����
	TXTPUserIDType	UserID;
	///����
	TXTPPasswordType	Password;
};

///�ʽ��˻�������
struct CXTPTradingAccountPasswordField
{
	///���͹�˾����
	TXTPBrokerIDType	BrokerID;
	///Ͷ�����ʺ�
	TXTPAccountIDType	AccountID;
	///����
	TXTPPasswordType	Password;
};

///�û�Ȩ��
struct CXTPUserRightField
{
	///���͹�˾����
	TXTPBrokerIDType	BrokerID;
	///�û�����
	TXTPUserIDType	UserID;
	///�ͻ�Ȩ������
	TXTPUserRightTypeType	UserRightType;
	///�Ƿ��ֹ
	TXTPBoolType	IsForbidden;
};

///Ͷ�����˻�
struct CXTPInvestorAccountField
{
	///���͹�˾����
	TXTPBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TXTPInvestorIDType	InvestorID;
	///Ͷ�����ʺ�
	TXTPAccountIDType	AccountID;
	///�Ƿ����˻�
	TXTPBoolType	IsDefault;
	///�˻�����
	TXTPAccountTypeType	AccountType;
	///�Ƿ��Ծ
	TXTPBoolType	IsActive;
	///�Ͻ������׵�Ԫ��
	TXTPTraderIDType	SHBranchPBU;
	///������׵�Ԫ��
	TXTPTraderIDType	SZBranchPBU;
};

///�û�IP
struct CXTPUserIPField
{
	///���͹�˾����
	TXTPBrokerIDType	BrokerID;
	///�û�����
	TXTPUserIDType	UserID;
	///IP��ַ
	TXTPIPAddressType	IPAddress;
	///IP��ַ����
	TXTPIPAddressType	IPMask;
	///Mac��ַ
	TXTPMacAddressType	MacAddress;
};

///�û���̬���Ʋ���
struct CXTPBrokerUserOTPParamField
{
	///���͹�˾����
	TXTPBrokerIDType	BrokerID;
	///�û�����
	TXTPUserIDType	UserID;
	///��̬�����ṩ��
	TXTPOTPVendorsIDType	OTPVendorsID;
	///��̬�������к�
	TXTPSerialNumberType	SerialNumber;
	///������Կ
	TXTPAuthKeyType	AuthKey;
	///Ư��ֵ
	TXTPLastDriftType	LastDrift;
	///�ɹ�ֵ
	TXTPLastSuccessType	LastSuccess;
	///��̬��������
	TXTPOTPTypeType	OTPType;
};

///�û���¼����
struct CXTPReqUserLoginField
{
	///������
	TXTPDateType	TradingDay;
	///���͹�˾����
	TXTPBrokerIDType	BrokerID;
	///�û�����
	TXTPUserIDType	UserID;
	///����
	TXTPPasswordType	Password;
	///�û��˲�Ʒ��Ϣ
	TXTPProductInfoType	UserProductInfo;
	///�ӿڶ˲�Ʒ��Ϣ
	TXTPProductInfoType	InterfaceProductInfo;
	///Э����Ϣ
	TXTPProtocolInfoType	ProtocolInfo;
	///Mac��ַ
	TXTPMacAddressType	MacAddress;
	///��̬����
	TXTPPasswordType	OneTimePassword;
	///�ն�IP��ַ
	TXTPIPAddressType	ClientIPAddress;
	///�ͻ�����֤��
	TXTPAuthCodeType	AuthCode;
};

///�û���¼Ӧ��
struct CXTPRspUserLoginField
{
	///������
	TXTPDateType	TradingDay;
	///��¼�ɹ�ʱ��
	TXTPTimeType	LoginTime;
	///���͹�˾����
	TXTPBrokerIDType	BrokerID;
	///�û�����
	TXTPUserIDType	UserID;
	///����ϵͳ����
	TXTPSystemNameType	SystemName;
	///ǰ�ñ��
	TXTPFrontIDType	FrontID;
	///�Ự���
	TXTPSessionIDType	SessionID;
	///��󱨵�����
	TXTPOrderRefType	MaxOrderRef;
};

///�û��ǳ�����
struct CXTPUserLogoutField
{
	///���͹�˾����
	TXTPBrokerIDType	BrokerID;
	///�û�����
	TXTPUserIDType	UserID;
};

///ȫ���ǳ���Ϣ
struct CXTPLogoutAllField
{
	///ǰ�ñ��
	TXTPFrontIDType	FrontID;
	///�Ự���
	TXTPSessionIDType	SessionID;
	///ϵͳ����
	TXTPSystemNameType	SystemName;
};

///ǿ�ƽ���Ա�˳�
struct CXTPForceUserLogoutField
{
	///���͹�˾����
	TXTPBrokerIDType	BrokerID;
	///�û�����
	TXTPUserIDType	UserID;
};

///���͹�˾�û�����
struct CXTPActivateBrokerUserField
{
	///���͹�˾����
	TXTPBrokerIDType	BrokerID;
	///�û�����
	TXTPUserIDType	UserID;
};

///���뱨��
struct CXTPInputOrderField
{
	///���͹�˾����
	TXTPBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TXTPInvestorIDType	InvestorID;
	///��Լ����
	TXTPInstrumentIDType	InstrumentID;
	///��������
	TXTPOrderRefType	OrderRef;
	///�û�����
	TXTPUserIDType	UserID;
	///����������
	TXTPExchangeIDType	ExchangeID;
	///�����۸�����
	TXTPOrderPriceTypeType	OrderPriceType;
	///��������
	TXTPDirectionType	Direction;
	///��Ͽ�ƽ��־
	TXTPCombOffsetFlagType	CombOffsetFlag;
	///���Ͷ���ױ���־
	TXTPCombHedgeFlagType	CombHedgeFlag;
	///�۸�
	TXTPStockPriceType	LimitPrice;
	///����
	TXTPVolumeType	VolumeTotalOriginal;
	///��Ч������
	TXTPTimeConditionType	TimeCondition;
	///GTD����
	TXTPDateType	GTDDate;
	///�ɽ�������
	TXTPVolumeConditionType	VolumeCondition;
	///��С�ɽ���
	TXTPVolumeType	MinVolume;
	///��������
	TXTPContingentConditionType	ContingentCondition;
	///ֹ���
	TXTPPriceType	StopPrice;
	///ǿƽԭ��
	TXTPForceCloseReasonType	ForceCloseReason;
	///�Զ������־
	TXTPBoolType	IsAutoSuspend;
	///ҵ��Ԫ
	TXTPBusinessUnitType	BusinessUnit;
	///������
	TXTPRequestIDType	RequestID;
	///�û�ǿƽ��־
	TXTPBoolType	UserForceClose;
};

///���뱨������
struct CXTPInputOrderActionField
{
	///���͹�˾����
	TXTPBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TXTPInvestorIDType	InvestorID;
	///������������
	TXTPOrderActionRefType	OrderActionRef;
	///��������
	TXTPOrderRefType	OrderRef;
	///������
	TXTPRequestIDType	RequestID;
	///ǰ�ñ��
	TXTPFrontIDType	FrontID;
	///�Ự���
	TXTPSessionIDType	SessionID;
	///����������
	TXTPExchangeIDType	ExchangeID;
	///������־
	TXTPActionFlagType	ActionFlag;
	///�۸�
	TXTPPriceType	LimitPrice;
	///�����仯
	TXTPVolumeType	VolumeChange;
	///�û�����
	TXTPUserIDType	UserID;
	///��Լ����
	TXTPInstrumentIDType	InstrumentID;
	///����������Ա����
	TXTPTraderIDType	BranchPBU;
	///���ر������
	TXTPOrderLocalIDType	OrderLocalID;
};

///ָ���ĺ�Լ
// struct CXTPSpecificInstrumentField
// {
// 	///��Լ����
// 	TXTPInstrumentIDType	InstrumentID;
// 	///����������
// 	TXTPExchangeIDType	ExchangeID;
// };

///ָ���Ľ�����
struct CXTPSpecificExchangeField
{
	///����������
	TXTPExchangeIDType	ExchangeID;
};

///�����������
struct CXTPMarketDataBaseField
{
	///������
	TXTPDateType	TradingDay;
	///�ϴν����
	TXTPPriceType	PreSettlementPrice;
	///������
	TXTPPriceType	PreClosePrice;
	///��ֲ���
	TXTPLargeVolumeType	PreOpenInterest;
	///����ʵ��
	TXTPRatioType	PreDelta;
};

///���龲̬����
struct CXTPMarketDataStaticField
{
	///����
	TXTPPriceType	OpenPrice;
	///��߼�
	TXTPPriceType	HighestPrice;
	///��ͼ�
	TXTPPriceType	LowestPrice;
	///������
	TXTPPriceType	ClosePrice;
	///��ͣ���
	TXTPPriceType	UpperLimitPrice;
	///��ͣ���
	TXTPPriceType	LowerLimitPrice;
	///���ν����
	TXTPPriceType	SettlementPrice;
	///����ʵ��
	TXTPRatioType	CurrDelta;
};

///�������³ɽ�����
struct CXTPMarketDataLastMatchField
{
	///���¼�
	TXTPPriceType	LastPrice;
	///����
	TXTPVolumeType	Volume;
	///�ɽ����
	TXTPMoneyType	Turnover;
	///�ֲ���
	TXTPLargeVolumeType	OpenInterest;
	///����(��)
	TXTPLargeVolumeType	Volume_New;
};

///�������ż�����
struct CXTPMarketDataBestPriceField
{
	///�����һ
	TXTPPriceType	BidPrice1;
	///������һ
	TXTPVolumeType	BidVolume1;
	///������һ
	TXTPPriceType	AskPrice1;
	///������һ
	TXTPVolumeType	AskVolume1;
};

///�����������������
struct CXTPMarketDataBid23Field
{
	///����۶�
	TXTPPriceType	BidPrice2;
	///��������
	TXTPVolumeType	BidVolume2;
	///�������
	TXTPPriceType	BidPrice3;
	///��������
	TXTPVolumeType	BidVolume3;
};

///������������������
struct CXTPMarketDataAsk23Field
{
	///�����۶�
	TXTPPriceType	AskPrice2;
	///��������
	TXTPVolumeType	AskVolume2;
	///��������
	TXTPPriceType	AskPrice3;
	///��������
	TXTPVolumeType	AskVolume3;
};

///���������ġ�������
struct CXTPMarketDataBid45Field
{
	///�������
	TXTPPriceType	BidPrice4;
	///��������
	TXTPVolumeType	BidVolume4;
	///�������
	TXTPPriceType	BidPrice5;
	///��������
	TXTPVolumeType	BidVolume5;
};

///���������ġ�������
struct CXTPMarketDataAsk45Field
{
	///��������
	TXTPPriceType	AskPrice4;
	///��������
	TXTPVolumeType	AskVolume4;
	///��������
	TXTPPriceType	AskPrice5;
	///��������
	TXTPVolumeType	AskVolume5;
};

///�������ʱ������
struct CXTPMarketDataUpdateTimeField
{
	///��Լ����
	TXTPInstrumentIDType	InstrumentID;
	///����޸�ʱ��
	TXTPTimeType	UpdateTime;
	///����޸ĺ���
	TXTPMillisecType	UpdateMillisec;
	///ҵ������
	TXTPDateType	ActionDay;
};

///�ɽ�����
struct CXTPMarketDataAveragePriceField
{
	///���վ���
	TXTPPriceType	AveragePrice;
};

///���齻������������
struct CXTPMarketDataExchangeField
{
	///����������
	TXTPExchangeIDType	ExchangeID;
};

///��Ϣ�ַ�
struct CXTPDisseminationField
{
	///����ϵ�к�
	TXTPSequenceSeriesType	SequenceSeries;
	///���к�
	TXTPSequenceNoType	SequenceNo;
};

///�ʽ�ת������
struct CXTPInputFundTransferField
{
	///���͹�˾����
	TXTPBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TXTPInvestorIDType	InvestorID;
	///Ͷ�����ʽ��ʺ�
	TXTPAccountIDType	AccountID;
	///�ʽ��ʻ�����
	TXTPPasswordType	Password;
	///�û�����
	TXTPUserIDType	UserID;
	///���׽��
	TXTPTradeAmountType	TradeAmount;
	///ժҪ
	TXTPDigestType	Digest;
	///�˻�����
	TXTPAccountTypeType	AccountType;
};

///�ʽ�ת��
struct CXTPFundTransferField
{
	///���͹�˾����
	TXTPBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TXTPInvestorIDType	InvestorID;
	///Ͷ�����ʽ��ʺ�
	TXTPAccountIDType	AccountID;
	///�ʽ��ʻ�����
	TXTPPasswordType	Password;
	///�û�����
	TXTPUserIDType	UserID;
	///���׽��
	TXTPTradeAmountType	TradeAmount;
	///ժҪ
	TXTPDigestType	Digest;
	///�Ự���
	TXTPSessionIDType	SessionID;
	///Liber������ˮ��
	TXTPLiberSerialType	LiberSerial;
	///ת��ƽ̨��ˮ��
	TXTPPlateSerialType	PlateSerial;
	///��������ˮ��
	TXTPBankSerialType	TransferSerial;
	///������
	TXTPDateType	TradingDay;
	///ת��ʱ��
	TXTPTimeType	TradeTime;
	///�������
	TXTPFundDirectionType	FundDirection;
	///�������
	TXTPErrorIDType	ErrorID;
	///������Ϣ
	TXTPErrorMsgType	ErrorMsg;
};

///�ʽ�ת�˲�ѯ����
struct CXTPQryFundTransferSerialField
{
	///���͹�˾����
	TXTPBrokerIDType	BrokerID;
	///Ͷ�����ʽ��ʺ�
	TXTPAccountIDType	AccountID;
	///�˻�����
	TXTPAccountTypeType	AccountType;
};

///�ʽ���ת
struct CXTPFundInterTransferField
{
	///���͹�˾����
	TXTPBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TXTPInvestorIDType	InvestorID;
	///�û�����
	TXTPUserIDType	UserID;
	///�ʽ��˻�����
	TXTPAccountIDType	AccountID;
	///�ʽ��˻�����
	TXTPPasswordType	Password;
	///���
	TXTPTradeAmountType	TradeAmount;
	///��ת����
	TXTPFundInterTransferTypeType	TransferType;
	///�ʽ���ת���
	TXTPLiberSerialType	SerialID;
};

///�ʽ���ת��ˮ
struct CXTPFundInterTransferSerialField
{
	///���͹�˾����
	TXTPBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TXTPInvestorIDType	InvestorID;
	///�û�����
	TXTPUserIDType	UserID;
	///�ʽ��˻�����
	TXTPAccountIDType	AccountID;
	///�ʽ��˻�����
	TXTPPasswordType	Password;
	///���
	TXTPTradeAmountType	TradeAmount;
	///��ת����
	TXTPFundInterTransferTypeType	TransferType;
	///�ʽ���ת���
	TXTPLiberSerialType	SerialID;
	///ת��ʱ��
	TXTPTimeType	TransferTime;
	///�������
	TXTPErrorIDType	ErrorID;
	///������Ϣ
	TXTPErrorMsgType	ErrorMsg;
};

///�ʽ���ת��ˮ��ѯ����
struct CXTPQryFundInterTransferSerialField
{
	///���͹�˾����
	TXTPBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TXTPInvestorIDType	InvestorID;
};

///��ȡ���ݿ���Ϣ
struct CXTPFetchDBInfoField
{
	///�û�����
	TXTPUserIDType	UserID;
	///����
	TXTPPasswordType	Password;
	///���ݿ�����
	TXTPUserNameType	DBIndex;
	///���ݿ�IP��ַ
	TXTPIPAddressType	IPAddress;
	///���ݿ�IP�˿�
	TXTPIPPortType	IPPort;
	///���ݿ�����
	TXTPUserNameType	DBName;
	///���ݿ��û���
	TXTPUserIDType	DBUserID;
	///���ݿ�����
	TXTPPasswordType	DBPassword;
};

///MD�û���Ϣ
struct CXTPMDUserInfoField
{
	///���͹�˾����
	TXTPBrokerIDType	BrokerID;
	///�û�����
	TXTPUserIDType	UserID;
	///�û�����
	TXTPUserNameType	UserName;
	///����
	TXTPPasswordType	Password;
	///����ϵͳ���
	TXTPSequenceNoType	MDSysID;
	///��Ʊ���������
	TXTPVolumeType	MaxStockCount;
	///��Ȩ���������
	TXTPVolumeType	MaxOptionsCount;
};


#endif
