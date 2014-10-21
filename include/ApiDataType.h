#ifndef _API_DATA_TYPE_H_
#define _API_DATA_TYPE_H_

/////////////////////////////////////////////////////////////////////////
///ErrorIDType是一个错误代码类型
/////////////////////////////////////////////////////////////////////////
typedef int ErrorIDType;

/////////////////////////////////////////////////////////////////////////
///ErrorMsgType是一个错误信息类型
/////////////////////////////////////////////////////////////////////////
typedef char ErrorMsgType[256];

/////////////////////////////////////////////////////////////////////////
///PriceType是一个价格类型
/////////////////////////////////////////////////////////////////////////
typedef double PriceType;

/////////////////////////////////////////////////////////////////////////
///VolumeType是一个交易量类型
/////////////////////////////////////////////////////////////////////////
typedef int VolumeType;

/////////////////////////////////////////////////////////////////////////
///QtyType是一个交易量类型
/////////////////////////////////////////////////////////////////////////
typedef double QtyType;

/////////////////////////////////////////////////////////////////////////
///LargeVolumeType是一个大额数量类型
/////////////////////////////////////////////////////////////////////////
typedef double LargeVolumeType;

/////////////////////////////////////////////////////////////////////////
///InstrumentIDType是一个合约代码类型
/////////////////////////////////////////////////////////////////////////
typedef char InstrumentIDType[31];

/////////////////////////////////////////////////////////////////////////
///SymbolType是一个合约唯一符号类型
/////////////////////////////////////////////////////////////////////////
typedef char SymbolType[64];

/////////////////////////////////////////////////////////////////////////
///DateTimeType是一个日期时间类型
/////////////////////////////////////////////////////////////////////////
typedef char DateTimeType[32];

/////////////////////////////////////////////////////////////////////////
///ExchangeIDType是一个交易所代码类型
/////////////////////////////////////////////////////////////////////////
typedef char ExchangeIDType[9];

/////////////////////////////////////////////////////////////////////////
///MoneyType是一个资金类型
/////////////////////////////////////////////////////////////////////////
typedef double MoneyType;

/////////////////////////////////////////////////////////////////////////
///DateType是一个日期类型
/////////////////////////////////////////////////////////////////////////
typedef char DateType[9];

/////////////////////////////////////////////////////////////////////////
///TimeType是一个时间类型
/////////////////////////////////////////////////////////////////////////
typedef char TimeType[9];

/////////////////////////////////////////////////////////////////////////
///UserIDType是一个用户代码类型
/////////////////////////////////////////////////////////////////////////
typedef char UserIDType[16];

/////////////////////////////////////////////////////////////////////////
///TFtdcPasswordType是一个密码类型
/////////////////////////////////////////////////////////////////////////
typedef char PasswordType[41];

/////////////////////////////////////////////////////////////////////////
///ProductInfoType是一个产品信息类型
/////////////////////////////////////////////////////////////////////////
typedef char ProductInfoType[11];

/////////////////////////////////////////////////////////////////////////
///BrokerIDType是一个经纪公司代码类型
/////////////////////////////////////////////////////////////////////////
typedef char BrokerIDType[11];

/////////////////////////////////////////////////////////////////////////
///AuthCodeType是一个客户端认证码类型
/////////////////////////////////////////////////////////////////////////
typedef char AuthCodeType[17];

/////////////////////////////////////////////////////////////////////////
///AddressType是一个地址类型
/////////////////////////////////////////////////////////////////////////
typedef char AddressType[512];

/////////////////////////////////////////////////////////////////////////
///VolumeMultipleType是一个合约数量乘数类型
/////////////////////////////////////////////////////////////////////////
typedef int VolumeMultipleType;

/////////////////////////////////////////////////////////////////////////
///InstrumentNameType是一个合约名称类型
/////////////////////////////////////////////////////////////////////////
typedef char InstrumentNameType[21];

/////////////////////////////////////////////////////////////////////////
///ContentType是一个消息正文类型
/////////////////////////////////////////////////////////////////////////
typedef char ContentType[501];

/////////////////////////////////////////////////////////////////////////
///SessionIDType是一个会话编号类型
/////////////////////////////////////////////////////////////////////////
typedef char SessionIDType[32];

/////////////////////////////////////////////////////////////////////////
///OrderIDType是一个订单唯一编号类型
/////////////////////////////////////////////////////////////////////////
typedef char OrderIDType[64];

/////////////////////////////////////////////////////////////////////////
///TradeIDType是一个成交编号类型
/////////////////////////////////////////////////////////////////////////
typedef char TradeIDType[64];
#endif