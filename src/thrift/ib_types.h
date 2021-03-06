/**
 * Autogenerated by Thrift Compiler (0.9.2)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef ib_TYPES_H
#define ib_TYPES_H

#include <iosfwd>

#include <thrift/Thrift.h>
#include <thrift/TApplicationException.h>
#include <thrift/protocol/TProtocol.h>
#include <thrift/transport/TTransport.h>

#include <thrift/cxxfunctional.h>


namespace sharp { namespace api {

class PingRequest;

class PingResponse;

class ContractRequest;

class OrderRequest;

class OrderResponse;

class OrderStatus;

class ExecutionFilter;

class ExecutedContract;

class RealTimeBar;

class HistoryRequest;

class Asset;

class StkPosition;

class OptPosition;

class Exception;


class PingRequest {
 public:

  static const char* ascii_fingerprint; // = "99914B932BD37A50B983C5E7C90AE93B";
  static const uint8_t binary_fingerprint[16]; // = {0x99,0x91,0x4B,0x93,0x2B,0xD3,0x7A,0x50,0xB9,0x83,0xC5,0xE7,0xC9,0x0A,0xE9,0x3B};

  PingRequest(const PingRequest&);
  PingRequest& operator=(const PingRequest&);
  PingRequest() {
  }

  virtual ~PingRequest() throw();

  bool operator == (const PingRequest & /* rhs */) const
  {
    return true;
  }
  bool operator != (const PingRequest &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const PingRequest & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  friend std::ostream& operator<<(std::ostream& out, const PingRequest& obj);
};

void swap(PingRequest &a, PingRequest &b);


class PingResponse {
 public:

  static const char* ascii_fingerprint; // = "99914B932BD37A50B983C5E7C90AE93B";
  static const uint8_t binary_fingerprint[16]; // = {0x99,0x91,0x4B,0x93,0x2B,0xD3,0x7A,0x50,0xB9,0x83,0xC5,0xE7,0xC9,0x0A,0xE9,0x3B};

  PingResponse(const PingResponse&);
  PingResponse& operator=(const PingResponse&);
  PingResponse() {
  }

  virtual ~PingResponse() throw();

  bool operator == (const PingResponse & /* rhs */) const
  {
    return true;
  }
  bool operator != (const PingResponse &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const PingResponse & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  friend std::ostream& operator<<(std::ostream& out, const PingResponse& obj);
};

void swap(PingResponse &a, PingResponse &b);


class ContractRequest {
 public:

  static const char* ascii_fingerprint; // = "C93D890311F28844166CF6E571EB3AC2";
  static const uint8_t binary_fingerprint[16]; // = {0xC9,0x3D,0x89,0x03,0x11,0xF2,0x88,0x44,0x16,0x6C,0xF6,0xE5,0x71,0xEB,0x3A,0xC2};

  ContractRequest(const ContractRequest&);
  ContractRequest& operator=(const ContractRequest&);
  ContractRequest() : symbol(), secType(), exchange(), currency() {
  }

  virtual ~ContractRequest() throw();
  std::string symbol;
  std::string secType;
  std::string exchange;
  std::string currency;

  void __set_symbol(const std::string& val);

  void __set_secType(const std::string& val);

  void __set_exchange(const std::string& val);

  void __set_currency(const std::string& val);

  bool operator == (const ContractRequest & rhs) const
  {
    if (!(symbol == rhs.symbol))
      return false;
    if (!(secType == rhs.secType))
      return false;
    if (!(exchange == rhs.exchange))
      return false;
    if (!(currency == rhs.currency))
      return false;
    return true;
  }
  bool operator != (const ContractRequest &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const ContractRequest & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  friend std::ostream& operator<<(std::ostream& out, const ContractRequest& obj);
};

void swap(ContractRequest &a, ContractRequest &b);


class OrderRequest {
 public:

  static const char* ascii_fingerprint; // = "BF0356C5E100788D29BCE753DB8BD2D7";
  static const uint8_t binary_fingerprint[16]; // = {0xBF,0x03,0x56,0xC5,0xE1,0x00,0x78,0x8D,0x29,0xBC,0xE7,0x53,0xDB,0x8B,0xD2,0xD7};

  OrderRequest(const OrderRequest&);
  OrderRequest& operator=(const OrderRequest&);
  OrderRequest() : action(), totalQuantity(0), orderType(), lmtPrice(0) {
  }

  virtual ~OrderRequest() throw();
  std::string action;
  int64_t totalQuantity;
  std::string orderType;
  double lmtPrice;

  void __set_action(const std::string& val);

  void __set_totalQuantity(const int64_t val);

  void __set_orderType(const std::string& val);

  void __set_lmtPrice(const double val);

  bool operator == (const OrderRequest & rhs) const
  {
    if (!(action == rhs.action))
      return false;
    if (!(totalQuantity == rhs.totalQuantity))
      return false;
    if (!(orderType == rhs.orderType))
      return false;
    if (!(lmtPrice == rhs.lmtPrice))
      return false;
    return true;
  }
  bool operator != (const OrderRequest &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const OrderRequest & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  friend std::ostream& operator<<(std::ostream& out, const OrderRequest& obj);
};

void swap(OrderRequest &a, OrderRequest &b);


class OrderResponse {
 public:

  static const char* ascii_fingerprint; // = "D4A0A1C18D8C4F4E3250111F0A1699FF";
  static const uint8_t binary_fingerprint[16]; // = {0xD4,0xA0,0xA1,0xC1,0x8D,0x8C,0x4F,0x4E,0x32,0x50,0x11,0x1F,0x0A,0x16,0x99,0xFF};

  OrderResponse(const OrderResponse&);
  OrderResponse& operator=(const OrderResponse&);
  OrderResponse() : orderId(0), state(0), clientId(0), permId(0), parentId(0), filled(0), remaining(0), avgFillPrice(0), lastFillPrice(0), status(""), whyHeld("") {
  }

  virtual ~OrderResponse() throw();
  int64_t orderId;
  int32_t state;
  int32_t clientId;
  int32_t permId;
  int32_t parentId;
  int32_t filled;
  int32_t remaining;
  double avgFillPrice;
  double lastFillPrice;
  std::string status;
  std::string whyHeld;

  void __set_orderId(const int64_t val);

  void __set_state(const int32_t val);

  void __set_clientId(const int32_t val);

  void __set_permId(const int32_t val);

  void __set_parentId(const int32_t val);

  void __set_filled(const int32_t val);

  void __set_remaining(const int32_t val);

  void __set_avgFillPrice(const double val);

  void __set_lastFillPrice(const double val);

  void __set_status(const std::string& val);

  void __set_whyHeld(const std::string& val);

  bool operator == (const OrderResponse & rhs) const
  {
    if (!(orderId == rhs.orderId))
      return false;
    if (!(state == rhs.state))
      return false;
    if (!(clientId == rhs.clientId))
      return false;
    if (!(permId == rhs.permId))
      return false;
    if (!(parentId == rhs.parentId))
      return false;
    if (!(filled == rhs.filled))
      return false;
    if (!(remaining == rhs.remaining))
      return false;
    if (!(avgFillPrice == rhs.avgFillPrice))
      return false;
    if (!(lastFillPrice == rhs.lastFillPrice))
      return false;
    if (!(status == rhs.status))
      return false;
    if (!(whyHeld == rhs.whyHeld))
      return false;
    return true;
  }
  bool operator != (const OrderResponse &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const OrderResponse & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  friend std::ostream& operator<<(std::ostream& out, const OrderResponse& obj);
};

void swap(OrderResponse &a, OrderResponse &b);

typedef struct _OrderStatus__isset {
  _OrderStatus__isset() : clientId(true), permId(true), parentId(true), filled(true), remaining(true), avgFillPrice(true), lastFillPrice(true), status(true), whyHeld(true) {}
  bool clientId :1;
  bool permId :1;
  bool parentId :1;
  bool filled :1;
  bool remaining :1;
  bool avgFillPrice :1;
  bool lastFillPrice :1;
  bool status :1;
  bool whyHeld :1;
} _OrderStatus__isset;

class OrderStatus {
 public:

  static const char* ascii_fingerprint; // = "B321648275444A105AF5A402D829640F";
  static const uint8_t binary_fingerprint[16]; // = {0xB3,0x21,0x64,0x82,0x75,0x44,0x4A,0x10,0x5A,0xF5,0xA4,0x02,0xD8,0x29,0x64,0x0F};

  OrderStatus(const OrderStatus&);
  OrderStatus& operator=(const OrderStatus&);
  OrderStatus() : symbol(), secType(), exchange(), currency(), action(), totalQuantity(0), orderType(), lmtPrice(0), orderId(0), state(0), clientId(0), permId(0), parentId(0), filled(0), remaining(0), avgFillPrice(0), lastFillPrice(0), status(""), whyHeld("") {
  }

  virtual ~OrderStatus() throw();
  std::string symbol;
  std::string secType;
  std::string exchange;
  std::string currency;
  std::string action;
  int64_t totalQuantity;
  std::string orderType;
  double lmtPrice;
  int64_t orderId;
  int16_t state;
  int32_t clientId;
  int32_t permId;
  int32_t parentId;
  int32_t filled;
  int32_t remaining;
  double avgFillPrice;
  double lastFillPrice;
  std::string status;
  std::string whyHeld;

  _OrderStatus__isset __isset;

  void __set_symbol(const std::string& val);

  void __set_secType(const std::string& val);

  void __set_exchange(const std::string& val);

  void __set_currency(const std::string& val);

  void __set_action(const std::string& val);

  void __set_totalQuantity(const int64_t val);

  void __set_orderType(const std::string& val);

  void __set_lmtPrice(const double val);

  void __set_orderId(const int64_t val);

  void __set_state(const int16_t val);

  void __set_clientId(const int32_t val);

  void __set_permId(const int32_t val);

  void __set_parentId(const int32_t val);

  void __set_filled(const int32_t val);

  void __set_remaining(const int32_t val);

  void __set_avgFillPrice(const double val);

  void __set_lastFillPrice(const double val);

  void __set_status(const std::string& val);

  void __set_whyHeld(const std::string& val);

  bool operator == (const OrderStatus & rhs) const
  {
    if (!(symbol == rhs.symbol))
      return false;
    if (!(secType == rhs.secType))
      return false;
    if (!(exchange == rhs.exchange))
      return false;
    if (!(currency == rhs.currency))
      return false;
    if (!(action == rhs.action))
      return false;
    if (!(totalQuantity == rhs.totalQuantity))
      return false;
    if (!(orderType == rhs.orderType))
      return false;
    if (!(lmtPrice == rhs.lmtPrice))
      return false;
    if (!(orderId == rhs.orderId))
      return false;
    if (!(state == rhs.state))
      return false;
    if (__isset.clientId != rhs.__isset.clientId)
      return false;
    else if (__isset.clientId && !(clientId == rhs.clientId))
      return false;
    if (__isset.permId != rhs.__isset.permId)
      return false;
    else if (__isset.permId && !(permId == rhs.permId))
      return false;
    if (__isset.parentId != rhs.__isset.parentId)
      return false;
    else if (__isset.parentId && !(parentId == rhs.parentId))
      return false;
    if (__isset.filled != rhs.__isset.filled)
      return false;
    else if (__isset.filled && !(filled == rhs.filled))
      return false;
    if (__isset.remaining != rhs.__isset.remaining)
      return false;
    else if (__isset.remaining && !(remaining == rhs.remaining))
      return false;
    if (__isset.avgFillPrice != rhs.__isset.avgFillPrice)
      return false;
    else if (__isset.avgFillPrice && !(avgFillPrice == rhs.avgFillPrice))
      return false;
    if (__isset.lastFillPrice != rhs.__isset.lastFillPrice)
      return false;
    else if (__isset.lastFillPrice && !(lastFillPrice == rhs.lastFillPrice))
      return false;
    if (__isset.status != rhs.__isset.status)
      return false;
    else if (__isset.status && !(status == rhs.status))
      return false;
    if (__isset.whyHeld != rhs.__isset.whyHeld)
      return false;
    else if (__isset.whyHeld && !(whyHeld == rhs.whyHeld))
      return false;
    return true;
  }
  bool operator != (const OrderStatus &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const OrderStatus & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  friend std::ostream& operator<<(std::ostream& out, const OrderStatus& obj);
};

void swap(OrderStatus &a, OrderStatus &b);


class ExecutionFilter {
 public:

  static const char* ascii_fingerprint; // = "1C9B6B9B4ED621287A761E0B29C6EC68";
  static const uint8_t binary_fingerprint[16]; // = {0x1C,0x9B,0x6B,0x9B,0x4E,0xD6,0x21,0x28,0x7A,0x76,0x1E,0x0B,0x29,0xC6,0xEC,0x68};

  ExecutionFilter(const ExecutionFilter&);
  ExecutionFilter& operator=(const ExecutionFilter&);
  ExecutionFilter() : clientId(0LL), acctCode(), time(), symbol(), secType(), exchange(), side() {
  }

  virtual ~ExecutionFilter() throw();
  int64_t clientId;
  std::string acctCode;
  std::string time;
  std::string symbol;
  std::string secType;
  std::string exchange;
  std::string side;

  void __set_clientId(const int64_t val);

  void __set_acctCode(const std::string& val);

  void __set_time(const std::string& val);

  void __set_symbol(const std::string& val);

  void __set_secType(const std::string& val);

  void __set_exchange(const std::string& val);

  void __set_side(const std::string& val);

  bool operator == (const ExecutionFilter & rhs) const
  {
    if (!(clientId == rhs.clientId))
      return false;
    if (!(acctCode == rhs.acctCode))
      return false;
    if (!(time == rhs.time))
      return false;
    if (!(symbol == rhs.symbol))
      return false;
    if (!(secType == rhs.secType))
      return false;
    if (!(exchange == rhs.exchange))
      return false;
    if (!(side == rhs.side))
      return false;
    return true;
  }
  bool operator != (const ExecutionFilter &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const ExecutionFilter & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  friend std::ostream& operator<<(std::ostream& out, const ExecutionFilter& obj);
};

void swap(ExecutionFilter &a, ExecutionFilter &b);


class ExecutedContract {
 public:

  static const char* ascii_fingerprint; // = "B76F8E8E669ADB8BAD70F660EA985742";
  static const uint8_t binary_fingerprint[16]; // = {0xB7,0x6F,0x8E,0x8E,0x66,0x9A,0xDB,0x8B,0xAD,0x70,0xF6,0x60,0xEA,0x98,0x57,0x42};

  ExecutedContract(const ExecutedContract&);
  ExecutedContract& operator=(const ExecutedContract&);
  ExecutedContract() : symbol(""), secType(""), expiry(""), right(""), multiplier(""), exchange(), primaryExchange(""), currency(""), localSymbol(""), tradingClass(""), secIdType(""), secId(""), conId(-1LL), strike(0), execId(""), time(""), acctNumber(""), side(""), shares(0), price(0), permId(0), clientId(0LL), orderId(0LL), liquidation(0), cumQty(0), avgPrice(0), evMultiplier(0), orderRef(""), evRule(""), c_currency(""), yieldRedemptionDate(0), commission(0), realizedPNL(0), gain(0) {
  }

  virtual ~ExecutedContract() throw();
  std::string symbol;
  std::string secType;
  std::string expiry;
  std::string right;
  std::string multiplier;
  std::string exchange;
  std::string primaryExchange;
  std::string currency;
  std::string localSymbol;
  std::string tradingClass;
  std::string secIdType;
  std::string secId;
  int64_t conId;
  double strike;
  std::string execId;
  std::string time;
  std::string acctNumber;
  std::string side;
  int32_t shares;
  double price;
  int32_t permId;
  int64_t clientId;
  int64_t orderId;
  int32_t liquidation;
  int32_t cumQty;
  double avgPrice;
  double evMultiplier;
  std::string orderRef;
  std::string evRule;
  std::string c_currency;
  int32_t yieldRedemptionDate;
  double commission;
  double realizedPNL;
  double gain;

  void __set_symbol(const std::string& val);

  void __set_secType(const std::string& val);

  void __set_expiry(const std::string& val);

  void __set_right(const std::string& val);

  void __set_multiplier(const std::string& val);

  void __set_exchange(const std::string& val);

  void __set_primaryExchange(const std::string& val);

  void __set_currency(const std::string& val);

  void __set_localSymbol(const std::string& val);

  void __set_tradingClass(const std::string& val);

  void __set_secIdType(const std::string& val);

  void __set_secId(const std::string& val);

  void __set_conId(const int64_t val);

  void __set_strike(const double val);

  void __set_execId(const std::string& val);

  void __set_time(const std::string& val);

  void __set_acctNumber(const std::string& val);

  void __set_side(const std::string& val);

  void __set_shares(const int32_t val);

  void __set_price(const double val);

  void __set_permId(const int32_t val);

  void __set_clientId(const int64_t val);

  void __set_orderId(const int64_t val);

  void __set_liquidation(const int32_t val);

  void __set_cumQty(const int32_t val);

  void __set_avgPrice(const double val);

  void __set_evMultiplier(const double val);

  void __set_orderRef(const std::string& val);

  void __set_evRule(const std::string& val);

  void __set_c_currency(const std::string& val);

  void __set_yieldRedemptionDate(const int32_t val);

  void __set_commission(const double val);

  void __set_realizedPNL(const double val);

  void __set_gain(const double val);

  bool operator == (const ExecutedContract & rhs) const
  {
    if (!(symbol == rhs.symbol))
      return false;
    if (!(secType == rhs.secType))
      return false;
    if (!(expiry == rhs.expiry))
      return false;
    if (!(right == rhs.right))
      return false;
    if (!(multiplier == rhs.multiplier))
      return false;
    if (!(exchange == rhs.exchange))
      return false;
    if (!(primaryExchange == rhs.primaryExchange))
      return false;
    if (!(currency == rhs.currency))
      return false;
    if (!(localSymbol == rhs.localSymbol))
      return false;
    if (!(tradingClass == rhs.tradingClass))
      return false;
    if (!(secIdType == rhs.secIdType))
      return false;
    if (!(secId == rhs.secId))
      return false;
    if (!(conId == rhs.conId))
      return false;
    if (!(strike == rhs.strike))
      return false;
    if (!(execId == rhs.execId))
      return false;
    if (!(time == rhs.time))
      return false;
    if (!(acctNumber == rhs.acctNumber))
      return false;
    if (!(side == rhs.side))
      return false;
    if (!(shares == rhs.shares))
      return false;
    if (!(price == rhs.price))
      return false;
    if (!(permId == rhs.permId))
      return false;
    if (!(clientId == rhs.clientId))
      return false;
    if (!(orderId == rhs.orderId))
      return false;
    if (!(liquidation == rhs.liquidation))
      return false;
    if (!(cumQty == rhs.cumQty))
      return false;
    if (!(avgPrice == rhs.avgPrice))
      return false;
    if (!(evMultiplier == rhs.evMultiplier))
      return false;
    if (!(orderRef == rhs.orderRef))
      return false;
    if (!(evRule == rhs.evRule))
      return false;
    if (!(c_currency == rhs.c_currency))
      return false;
    if (!(yieldRedemptionDate == rhs.yieldRedemptionDate))
      return false;
    if (!(commission == rhs.commission))
      return false;
    if (!(realizedPNL == rhs.realizedPNL))
      return false;
    if (!(gain == rhs.gain))
      return false;
    return true;
  }
  bool operator != (const ExecutedContract &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const ExecutedContract & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  friend std::ostream& operator<<(std::ostream& out, const ExecutedContract& obj);
};

void swap(ExecutedContract &a, ExecutedContract &b);


class RealTimeBar {
 public:

  static const char* ascii_fingerprint; // = "F497BCC02B737D782888C43604D4FC50";
  static const uint8_t binary_fingerprint[16]; // = {0xF4,0x97,0xBC,0xC0,0x2B,0x73,0x7D,0x78,0x28,0x88,0xC4,0x36,0x04,0xD4,0xFC,0x50};

  RealTimeBar(const RealTimeBar&);
  RealTimeBar& operator=(const RealTimeBar&);
  RealTimeBar() : reqId(-2LL), time(1LL), open(1), low(1), high(1), close(1), volume(1LL), wap(1), count(1) {
  }

  virtual ~RealTimeBar() throw();
  int64_t reqId;
  int64_t time;
  double open;
  double low;
  double high;
  double close;
  int64_t volume;
  double wap;
  int32_t count;

  void __set_reqId(const int64_t val);

  void __set_time(const int64_t val);

  void __set_open(const double val);

  void __set_low(const double val);

  void __set_high(const double val);

  void __set_close(const double val);

  void __set_volume(const int64_t val);

  void __set_wap(const double val);

  void __set_count(const int32_t val);

  bool operator == (const RealTimeBar & rhs) const
  {
    if (!(reqId == rhs.reqId))
      return false;
    if (!(time == rhs.time))
      return false;
    if (!(open == rhs.open))
      return false;
    if (!(low == rhs.low))
      return false;
    if (!(high == rhs.high))
      return false;
    if (!(close == rhs.close))
      return false;
    if (!(volume == rhs.volume))
      return false;
    if (!(wap == rhs.wap))
      return false;
    if (!(count == rhs.count))
      return false;
    return true;
  }
  bool operator != (const RealTimeBar &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const RealTimeBar & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  friend std::ostream& operator<<(std::ostream& out, const RealTimeBar& obj);
};

void swap(RealTimeBar &a, RealTimeBar &b);


class HistoryRequest {
 public:

  static const char* ascii_fingerprint; // = "E024B330CCC3A1E76954383045971A83";
  static const uint8_t binary_fingerprint[16]; // = {0xE0,0x24,0xB3,0x30,0xCC,0xC3,0xA1,0xE7,0x69,0x54,0x38,0x30,0x45,0x97,0x1A,0x83};

  HistoryRequest(const HistoryRequest&);
  HistoryRequest& operator=(const HistoryRequest&);
  HistoryRequest() : symbol(""), secType("STK"), exchange("SMART"), currency("USD"), primaryExchange("NASDAQ"), endDateTime("20150824 17:00:00"), durationStr("10 W"), barSizeSetting("1 min"), whatToShow("TRADES"), useRTH(1), formatDate(1) {
  }

  virtual ~HistoryRequest() throw();
  std::string symbol;
  std::string secType;
  std::string exchange;
  std::string currency;
  std::string primaryExchange;
  std::string endDateTime;
  std::string durationStr;
  std::string barSizeSetting;
  std::string whatToShow;
  int32_t useRTH;
  int32_t formatDate;

  void __set_symbol(const std::string& val);

  void __set_secType(const std::string& val);

  void __set_exchange(const std::string& val);

  void __set_currency(const std::string& val);

  void __set_primaryExchange(const std::string& val);

  void __set_endDateTime(const std::string& val);

  void __set_durationStr(const std::string& val);

  void __set_barSizeSetting(const std::string& val);

  void __set_whatToShow(const std::string& val);

  void __set_useRTH(const int32_t val);

  void __set_formatDate(const int32_t val);

  bool operator == (const HistoryRequest & rhs) const
  {
    if (!(symbol == rhs.symbol))
      return false;
    if (!(secType == rhs.secType))
      return false;
    if (!(exchange == rhs.exchange))
      return false;
    if (!(currency == rhs.currency))
      return false;
    if (!(primaryExchange == rhs.primaryExchange))
      return false;
    if (!(endDateTime == rhs.endDateTime))
      return false;
    if (!(durationStr == rhs.durationStr))
      return false;
    if (!(barSizeSetting == rhs.barSizeSetting))
      return false;
    if (!(whatToShow == rhs.whatToShow))
      return false;
    if (!(useRTH == rhs.useRTH))
      return false;
    if (!(formatDate == rhs.formatDate))
      return false;
    return true;
  }
  bool operator != (const HistoryRequest &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const HistoryRequest & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  friend std::ostream& operator<<(std::ostream& out, const HistoryRequest& obj);
};

void swap(HistoryRequest &a, HistoryRequest &b);


class Asset {
 public:

  static const char* ascii_fingerprint; // = "09032911E2058CF1C4B0E65B8A1180BF";
  static const uint8_t binary_fingerprint[16]; // = {0x09,0x03,0x29,0x11,0xE2,0x05,0x8C,0xF1,0xC4,0xB0,0xE6,0x5B,0x8A,0x11,0x80,0xBF};

  Asset(const Asset&);
  Asset& operator=(const Asset&);
  Asset() : conId(0), strike(0), position(0), marketPrice(0), marketValue(0), averageCost(0), unrealizedPNL(0), realizedPNL(0), accountName(), symbol(), secType(), expiry(), right(), multiplier(), exchange(), primaryExchange(), currency(), localSymbol(), tradingClass(), secIdType(), secId() {
  }

  virtual ~Asset() throw();
  int64_t conId;
  double strike;
  int32_t position;
  double marketPrice;
  double marketValue;
  double averageCost;
  double unrealizedPNL;
  double realizedPNL;
  std::string accountName;
  std::string symbol;
  std::string secType;
  std::string expiry;
  std::string right;
  std::string multiplier;
  std::string exchange;
  std::string primaryExchange;
  std::string currency;
  std::string localSymbol;
  std::string tradingClass;
  std::string secIdType;
  std::string secId;

  void __set_conId(const int64_t val);

  void __set_strike(const double val);

  void __set_position(const int32_t val);

  void __set_marketPrice(const double val);

  void __set_marketValue(const double val);

  void __set_averageCost(const double val);

  void __set_unrealizedPNL(const double val);

  void __set_realizedPNL(const double val);

  void __set_accountName(const std::string& val);

  void __set_symbol(const std::string& val);

  void __set_secType(const std::string& val);

  void __set_expiry(const std::string& val);

  void __set_right(const std::string& val);

  void __set_multiplier(const std::string& val);

  void __set_exchange(const std::string& val);

  void __set_primaryExchange(const std::string& val);

  void __set_currency(const std::string& val);

  void __set_localSymbol(const std::string& val);

  void __set_tradingClass(const std::string& val);

  void __set_secIdType(const std::string& val);

  void __set_secId(const std::string& val);

  bool operator == (const Asset & rhs) const
  {
    if (!(conId == rhs.conId))
      return false;
    if (!(strike == rhs.strike))
      return false;
    if (!(position == rhs.position))
      return false;
    if (!(marketPrice == rhs.marketPrice))
      return false;
    if (!(marketValue == rhs.marketValue))
      return false;
    if (!(averageCost == rhs.averageCost))
      return false;
    if (!(unrealizedPNL == rhs.unrealizedPNL))
      return false;
    if (!(realizedPNL == rhs.realizedPNL))
      return false;
    if (!(accountName == rhs.accountName))
      return false;
    if (!(symbol == rhs.symbol))
      return false;
    if (!(secType == rhs.secType))
      return false;
    if (!(expiry == rhs.expiry))
      return false;
    if (!(right == rhs.right))
      return false;
    if (!(multiplier == rhs.multiplier))
      return false;
    if (!(exchange == rhs.exchange))
      return false;
    if (!(primaryExchange == rhs.primaryExchange))
      return false;
    if (!(currency == rhs.currency))
      return false;
    if (!(localSymbol == rhs.localSymbol))
      return false;
    if (!(tradingClass == rhs.tradingClass))
      return false;
    if (!(secIdType == rhs.secIdType))
      return false;
    if (!(secId == rhs.secId))
      return false;
    return true;
  }
  bool operator != (const Asset &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Asset & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  friend std::ostream& operator<<(std::ostream& out, const Asset& obj);
};

void swap(Asset &a, Asset &b);


class StkPosition {
 public:

  static const char* ascii_fingerprint; // = "44156A2FED099BBAFBD39CBA70225370";
  static const uint8_t binary_fingerprint[16]; // = {0x44,0x15,0x6A,0x2F,0xED,0x09,0x9B,0xBA,0xFB,0xD3,0x9C,0xBA,0x70,0x22,0x53,0x70};

  StkPosition(const StkPosition&);
  StkPosition& operator=(const StkPosition&);
  StkPosition() : account(), position(0), avgCost(0) {
  }

  virtual ~StkPosition() throw();
  std::string account;
  int32_t position;
  double avgCost;

  void __set_account(const std::string& val);

  void __set_position(const int32_t val);

  void __set_avgCost(const double val);

  bool operator == (const StkPosition & rhs) const
  {
    if (!(account == rhs.account))
      return false;
    if (!(position == rhs.position))
      return false;
    if (!(avgCost == rhs.avgCost))
      return false;
    return true;
  }
  bool operator != (const StkPosition &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const StkPosition & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  friend std::ostream& operator<<(std::ostream& out, const StkPosition& obj);
};

void swap(StkPosition &a, StkPosition &b);


class OptPosition {
 public:

  static const char* ascii_fingerprint; // = "DD2E4318389EEDD0742DFD59A9B08427";
  static const uint8_t binary_fingerprint[16]; // = {0xDD,0x2E,0x43,0x18,0x38,0x9E,0xED,0xD0,0x74,0x2D,0xFD,0x59,0xA9,0xB0,0x84,0x27};

  OptPosition(const OptPosition&);
  OptPosition& operator=(const OptPosition&);
  OptPosition() : account(), conId(0), position(0), avgCost(0), strike(0), symbol(), secType(), expiry(), right(), multiplier(), exchange(), primaryExchange(), currency(), localSymbol(), tradingClass(), secIdType(), secId() {
  }

  virtual ~OptPosition() throw();
  std::string account;
  int64_t conId;
  int32_t position;
  double avgCost;
  double strike;
  std::string symbol;
  std::string secType;
  std::string expiry;
  std::string right;
  std::string multiplier;
  std::string exchange;
  std::string primaryExchange;
  std::string currency;
  std::string localSymbol;
  std::string tradingClass;
  std::string secIdType;
  std::string secId;

  void __set_account(const std::string& val);

  void __set_conId(const int64_t val);

  void __set_position(const int32_t val);

  void __set_avgCost(const double val);

  void __set_strike(const double val);

  void __set_symbol(const std::string& val);

  void __set_secType(const std::string& val);

  void __set_expiry(const std::string& val);

  void __set_right(const std::string& val);

  void __set_multiplier(const std::string& val);

  void __set_exchange(const std::string& val);

  void __set_primaryExchange(const std::string& val);

  void __set_currency(const std::string& val);

  void __set_localSymbol(const std::string& val);

  void __set_tradingClass(const std::string& val);

  void __set_secIdType(const std::string& val);

  void __set_secId(const std::string& val);

  bool operator == (const OptPosition & rhs) const
  {
    if (!(account == rhs.account))
      return false;
    if (!(conId == rhs.conId))
      return false;
    if (!(position == rhs.position))
      return false;
    if (!(avgCost == rhs.avgCost))
      return false;
    if (!(strike == rhs.strike))
      return false;
    if (!(symbol == rhs.symbol))
      return false;
    if (!(secType == rhs.secType))
      return false;
    if (!(expiry == rhs.expiry))
      return false;
    if (!(right == rhs.right))
      return false;
    if (!(multiplier == rhs.multiplier))
      return false;
    if (!(exchange == rhs.exchange))
      return false;
    if (!(primaryExchange == rhs.primaryExchange))
      return false;
    if (!(currency == rhs.currency))
      return false;
    if (!(localSymbol == rhs.localSymbol))
      return false;
    if (!(tradingClass == rhs.tradingClass))
      return false;
    if (!(secIdType == rhs.secIdType))
      return false;
    if (!(secId == rhs.secId))
      return false;
    return true;
  }
  bool operator != (const OptPosition &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const OptPosition & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  friend std::ostream& operator<<(std::ostream& out, const OptPosition& obj);
};

void swap(OptPosition &a, OptPosition &b);

typedef struct _Exception__isset {
  _Exception__isset() : what(false), why(false) {}
  bool what :1;
  bool why :1;
} _Exception__isset;

class Exception : public ::apache::thrift::TException {
 public:

  static const char* ascii_fingerprint; // = "3F5FC93B338687BC7235B1AB103F47B3";
  static const uint8_t binary_fingerprint[16]; // = {0x3F,0x5F,0xC9,0x3B,0x33,0x86,0x87,0xBC,0x72,0x35,0xB1,0xAB,0x10,0x3F,0x47,0xB3};

  Exception(const Exception&);
  Exception& operator=(const Exception&);
  Exception() : what(0), why() {
  }

  virtual ~Exception() throw();
  int32_t what;
  std::string why;

  _Exception__isset __isset;

  void __set_what(const int32_t val);

  void __set_why(const std::string& val);

  bool operator == (const Exception & rhs) const
  {
    if (!(what == rhs.what))
      return false;
    if (!(why == rhs.why))
      return false;
    return true;
  }
  bool operator != (const Exception &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Exception & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  friend std::ostream& operator<<(std::ostream& out, const Exception& obj);
};

void swap(Exception &a, Exception &b);

}} // namespace

#endif
