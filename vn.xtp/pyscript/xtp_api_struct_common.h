/////////////////////////////////////////////////////////////////////////
///@author ��̩֤ȯ�ɷ����޹�˾
///@file xtp_api_struct_common.h
///@brief ����ҵ�񹫹����ݽṹ
/////////////////////////////////////////////////////////////////////////

#ifndef _XTP_API_STRUCT_COMMON_H_
#define _XTP_API_STRUCT_COMMON_H_

#include <stdint.h>
#include "xtp_api_data_type.h"

///��Ӧ��Ϣ
#define XTP_ERR_MSG_LEN  76
typedef struct XTPRspInfoStruct
{
	///�������
	int32_t	error_id;
	///������Ϣ
	char	error_msg[XTP_ERR_MSG_LEN];
} XTPRI;

#endif // !_XTP_API_STRUCT_COMMON_H_
