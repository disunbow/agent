/**
 * Autogenerated by Thrift Compiler (0.9.3)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef agent_TYPES_H
#define agent_TYPES_H

#include <iosfwd>

#include <thrift/Thrift.h>
#include <thrift/TApplicationException.h>
#include <thrift/protocol/TProtocol.h>
#include <thrift/transport/TTransport.h>

#include <thrift/cxxfunctional.h>




typedef std::string bytes;

class Request;

class Response;

typedef struct _Request__isset {
  _Request__isset() : service_id(false), path(false), timeout_m_s(false), body(false), headers(false), params(false), callback(false) {}
  bool service_id :1;
  bool path :1;
  bool timeout_m_s :1;
  bool body :1;
  bool headers :1;
  bool params :1;
  bool callback :1;
} _Request__isset;

class Request {
 public:

  Request(const Request&);
  Request& operator=(const Request&);
  Request() : service_id(), path(), timeout_m_s(0), body(), callback() {
  }

  virtual ~Request() throw();
  std::string service_id;
  std::string path;
  int32_t timeout_m_s;
  bytes body;
  std::map<std::string, std::string>  headers;
  std::map<std::string, std::string>  params;
  std::string callback;

  _Request__isset __isset;

  void __set_service_id(const std::string& val);

  void __set_path(const std::string& val);

  void __set_timeout_m_s(const int32_t val);

  void __set_body(const bytes& val);

  void __set_headers(const std::map<std::string, std::string> & val);

  void __set_params(const std::map<std::string, std::string> & val);

  void __set_callback(const std::string& val);

  bool operator == (const Request & rhs) const
  {
    if (!(service_id == rhs.service_id))
      return false;
    if (!(path == rhs.path))
      return false;
    if (!(timeout_m_s == rhs.timeout_m_s))
      return false;
    if (!(body == rhs.body))
      return false;
    if (!(headers == rhs.headers))
      return false;
    if (!(params == rhs.params))
      return false;
    if (!(callback == rhs.callback))
      return false;
    return true;
  }
  bool operator != (const Request &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Request & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(Request &a, Request &b);

inline std::ostream& operator<<(std::ostream& out, const Request& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _Response__isset {
  _Response__isset() : status_code(false), status(false), body(false) {}
  bool status_code :1;
  bool status :1;
  bool body :1;
} _Response__isset;

class Response {
 public:

  Response(const Response&);
  Response& operator=(const Response&);
  Response() : status_code(0), status(), body() {
  }

  virtual ~Response() throw();
  int32_t status_code;
  std::string status;
  bytes body;

  _Response__isset __isset;

  void __set_status_code(const int32_t val);

  void __set_status(const std::string& val);

  void __set_body(const bytes& val);

  bool operator == (const Response & rhs) const
  {
    if (!(status_code == rhs.status_code))
      return false;
    if (!(status == rhs.status))
      return false;
    if (!(body == rhs.body))
      return false;
    return true;
  }
  bool operator != (const Response &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Response & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(Response &a, Response &b);

inline std::ostream& operator<<(std::ostream& out, const Response& obj)
{
  obj.printTo(out);
  return out;
}



#endif