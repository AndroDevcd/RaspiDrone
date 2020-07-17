#include "native_mapping.h"

using namespace std;
using namespace snb_api;

#ifdef __cplusplus
extern "C" {
#endif

EXPORTED short snb_link_proc(const char* funcName, int32_t addr) {
	string name = funcName;

	if(
		name == "common.gpio#__srt_global.setup" && addr == 3025
		|| name == "common.gpio#__srt_global.pin_mode" && addr == 3026
		|| name == "common.gpio#__srt_global.write_pin" && addr == 3027
		|| name == "common.gpio#__srt_global.read_pin" && addr == 3028
		|| name == "common.network.driver#__srt_global.setup" && addr == 3029
		|| name == "common.network.driver#__srt_global.set_transmission_lvl" && addr == 3030
		|| name == "common.network.driver#__srt_global.set_transmission_rate" && addr == 3031
		|| name == "common.network.driver#__srt_global.dump_details" && addr == 3032
		|| name == "common.network.driver#__srt_global.set_retry_count" && addr == 3033
		|| name == "common.network.driver#__srt_global.power_down" && addr == 3034
		|| name == "common.network.driver#__srt_global.get_signal_strength" && addr == 3035
		|| name == "common.network.driver#__srt_global.read" && addr == 3036
		|| name == "common.network.driver#__srt_global.send" && addr == 3037
		|| name == "common.network.driver#__srt_global.get_last_error" && addr == 3038
		|| name == "device#__srt_global.get_dst_cm" && addr == 3073
	) {
		return 1;
	}

return 0;
}

void call_common_gpio$__srt_global_setup() {
	import(common_gpio); 

	setup();
}

void call_common_gpio$__srt_global_pin_mode() {
	import(common_gpio); 

	var pin(internal::getfpNumAt(0));
	var mode(internal::getfpNumAt(1));
	pin_mode(pin, mode);
}

void call_common_gpio$__srt_global_write_pin() {
	import(common_gpio); 

	var pin(internal::getfpNumAt(0));
	var value(internal::getfpNumAt(1));
	write_pin(pin, value);
}

void call_common_gpio$__srt_global_read_pin() {
	import(common_gpio); 

	var pin(internal::getfpNumAt(0));
	var $result(internal::getfpNumAt(0));
	$result = read_pin(pin);
}

void call_common_network_driver$__srt_global_setup() {
	import(common_network_driver); 

	var trnsLvl(internal::getfpNumAt(0));
	var rate(internal::getfpNumAt(1));
	var delay(internal::getfpNumAt(2));
	var retryCount(internal::getfpNumAt(3));
	var isClient(internal::getfpNumAt(4));
	setup(trnsLvl, rate, delay, retryCount, isClient);
}

void call_common_network_driver$__srt_global_set_transmission_lvl() {
	import(common_network_driver); 

	var level(internal::getfpNumAt(0));
	set_transmission_lvl(level);
}

void call_common_network_driver$__srt_global_set_transmission_rate() {
	import(common_network_driver); 

	var level(internal::getfpNumAt(0));
	set_transmission_rate(level);
}

void call_common_network_driver$__srt_global_dump_details() {
	import(common_network_driver); 

	dump_details();
}

void call_common_network_driver$__srt_global_set_retry_count() {
	import(common_network_driver); 

	var delay(internal::getfpNumAt(0));
	var count(internal::getfpNumAt(1));
	set_retry_count(delay, count);
}

void call_common_network_driver$__srt_global_power_down() {
	import(common_network_driver); 

	power_down();
}

void call_common_network_driver$__srt_global_get_signal_strength() {
	import(common_network_driver); 

	var $result(internal::getfpNumAt(0));
	$result = get_signal_strength();
}

void call_common_network_driver$__srt_global_read() {
	import(common_network_driver); 

	object $result = internal::getfpLocalAt(0);
	_int8_array $returnVal_ = read();
	set($result, $returnVal_);
}

void call_common_network_driver$__srt_global_send() {
	import(common_network_driver); 

	object $tmpField0 = internal::getfpLocalAt(0);
	_int8_array data(internal::getVarPtr($tmpField0), internal::getSize($tmpField0), $tmpField0);
	send(data);
}

void call_common_network_driver$__srt_global_get_last_error() {
	import(common_network_driver); 

	var $result(internal::getfpNumAt(0));
	$result = get_last_error();
}

void call_device$__srt_global_get_dst_cm() {
	import(device); 

	var trg(internal::getfpNumAt(0));
	var echo(internal::getfpNumAt(1));
	var $result(internal::getfpNumAt(0));
	$result = get_dst_cm(trg, echo);
}

EXPORTED void snb_main(long procAddr) {
	switch(procAddr) {
		case 3025: 
			call_common_gpio$__srt_global_setup();
			break;
		case 3026: 
			call_common_gpio$__srt_global_pin_mode();
			break;
		case 3027: 
			call_common_gpio$__srt_global_write_pin();
			break;
		case 3028: 
			call_common_gpio$__srt_global_read_pin();
			break;
		case 3029: 
			call_common_network_driver$__srt_global_setup();
			break;
		case 3030: 
			call_common_network_driver$__srt_global_set_transmission_lvl();
			break;
		case 3031: 
			call_common_network_driver$__srt_global_set_transmission_rate();
			break;
		case 3032: 
			call_common_network_driver$__srt_global_dump_details();
			break;
		case 3033: 
			call_common_network_driver$__srt_global_set_retry_count();
			break;
		case 3034: 
			call_common_network_driver$__srt_global_power_down();
			break;
		case 3035: 
			call_common_network_driver$__srt_global_get_signal_strength();
			break;
		case 3036: 
			call_common_network_driver$__srt_global_read();
			break;
		case 3037: 
			call_common_network_driver$__srt_global_send();
			break;
		case 3038: 
			call_common_network_driver$__srt_global_get_last_error();
			break;
		case 3073: 
			call_device$__srt_global_get_dst_cm();
			break;
	}
}

#ifdef __cplusplus
}
#endif
