#ifndef _CUST_BATTERY_METER_H
#define _CUST_BATTERY_METER_H

#include <mach/mt_typedefs.h>
#include <linux/htc_devices_dtb.h>

#define INIT_SOC_BY_SW_SOC
#define HW_FG_FORCE_USE_SW_OCV
#define SOC_BY_HW_FG

#define CUST_DISABLE_CAPACITY_OCV2CV_TRANSFORM

#if 0
#define CUST_TABT_NUMBER 17
#define VBAT_CHANNEL_NUMBER      7
#define ISENSE_CHANNEL_NUMBER	 6
#define VCHARGER_CHANNEL_NUMBER  4
#define VBATTEMP_CHANNEL_NUMBER  5
#endif
#define R_BAT_SENSE 4					
#define R_I_SENSE 4						
#define R_CHARGER_1 330
#define R_CHARGER_2 39

#define TEMPERATURE_T0             110
#define TEMPERATURE_T1             0
#define TEMPERATURE_T2             25
#define TEMPERATURE_T3             50
#define TEMPERATURE_T              255 

#define FG_METER_RESISTANCE 	0

#define Q_MAX_POS_50	2408
#define Q_MAX_POS_25	2432
#define Q_MAX_POS_0		2244
#define Q_MAX_NEG_10	1654

#define Q_MAX_POS_50_H_CURRENT	2389
#define Q_MAX_POS_25_H_CURRENT	2390
#define Q_MAX_POS_0_H_CURRENT	1814
#define Q_MAX_NEG_10_H_CURRENT	696

#define Q_MAX_SPEC     2800

#define OAM_D5		 1		


#define CHANGE_TRACKING_POINT
#define CUST_TRACKING_POINT  1
#define CUST_R_SENSE         68
#define CUST_HW_CC 		    0
#define AGING_TUNING_VALUE   103
#define CUST_R_FG_OFFSET    0

#define OCV_BOARD_COMPESATE	0 
#define R_FG_BOARD_BASE		1000
#define R_FG_BOARD_SLOPE	1000 

extern int g_get_car_tune_value_by_pcbid();
#define CAR_TUNE_VALUE g_get_car_tune_value_by_pcbid()

#define CURRENT_DETECT_R_FG	10  
#define MinErrorOffset       1000
#define FG_VBAT_AVERAGE_SIZE 18
#define R_FG_VALUE 			10 

#define CUST_POWERON_DELTA_CAPACITY_TOLRANCE	100
#define CUST_POWERON_LOW_CAPACITY_TOLRANCE		5
#define CUST_POWERON_MAX_VBAT_TOLRANCE			90
#define CUST_POWERON_DELTA_VBAT_TOLRANCE		30

#ifdef CONFIG_MTK_DISABLE_POWER_ON_OFF_VOLTAGE_LIMITATION
#define FIXED_TBAT_25
#endif

#define VBAT_NORMAL_WAKEUP		3600		
#define VBAT_LOW_POWER_WAKEUP		3500		
#define NORMAL_WAKEUP_PERIOD		5400 		
#define LOW_POWER_WAKEUP_PERIOD		300		
#define CLOSE_POWEROFF_WAKEUP_PERIOD	30	

#define INIT_SOC_BY_SW_SOC
#define MTK_ENABLE_AGING_ALGORITHM	
#define MD_SLEEP_CURRENT_CHECK	
#define Q_MAX_BY_CURRENT		

#define HW_FG_FORCE_USE_SW_OCV
#define DISABLE_CHARGING_CURRENT_MEASURE

#endif	
