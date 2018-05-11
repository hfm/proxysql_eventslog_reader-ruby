#include "proxysql_eventslog_reader.h"

VALUE rb_mProxysqlEventslogReader;

void
Init_proxysql_eventslog_reader(void)
{
  rb_mProxysqlEventslogReader = rb_define_module("ProxysqlEventslogReader");
}
