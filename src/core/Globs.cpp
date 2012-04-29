/*!
 *  @file		Globs.cpp
 *  Project		DEG
 *	@brief		Global variables declarations
 *  @author		Francois Best
 *	@date		06/04/2010
 *  @license	CC-BY-NC-SA Forty Seven Effects - 2012
 *
 * THE WORK (AS DEFINED BELOW) IS PROVIDED UNDER THE TERMS 
 * OF THIS CREATIVE COMMONS PUBLIC LICENSE ("CCPL" OR "LICENSE").
 * THE WORK IS PROTECTED BY COPYRIGHT AND/OR OTHER APPLICABLE LAW. 
 * ANY USE OF THE WORK OTHER THAN AS AUTHORIZED UNDER THIS LICENSE 
 * OR COPYRIGHT LAW IS PROHIBITED.
 * 
 * BY EXERCISING ANY RIGHTS TO THE WORK PROVIDED HERE, YOU ACCEPT 
 * AND AGREE TO BE BOUND BY THE TERMS OF THIS LICENSE. 
 * TO THE EXTENT THIS LICENSE MAY BE CONSIDERED TO BE A CONTRACT, 
 * THE LICENSOR GRANTS YOU THE RIGHTS CONTAINED HERE IN CONSIDERATION 
 * OF YOUR ACCEPTANCE OF SUCH TERMS AND CONDITIONS.
 * http://creativecommons.org/licenses/by-nc-sa/3.0/
 */



#include "Globs.h"
#include "fassert.h"

EnvelopeGenerator gEnvA;
EnvelopeGenerator gEnvB;


const byte gPrescaleShift[5] = {
	0, 3, 6, 8, 10
};


const uint32_t gClockDivision[12] = {
	
	// We are using one set of clock divisions for the lowest octave.
	// Other octaves are computed by right-shifting these values.
	
	1956995, 1847158, 1743485, 1645630, 1553268, 1466090, 1383805, 1306138, 1232830, 1163636, 1098326, 1036682
	
	// In case we need all the values, here they are
	/*1956995, 1847158, 1743485, 1645630, 1553268, 1466090, 1383805, 1306138,
	1232830, 1163636, 1098326, 1036682, 978498, 923579, 871742, 822815,
	776634, 733045, 691902, 653069, 616415, 581818, 549163, 518341,
	489249, 461789, 435871, 411408, 388317, 366522, 345951, 326534,
	308207, 290909, 274582, 259171, 244624, 230895, 217936, 205704,
	194159, 183261, 172976, 163267, 154104, 145455, 137291, 129585,
	122312, 115447, 108968, 102852, 97079, 91631, 86488, 81634, 
	77052, 72727, 68645, 64793, 61156, 57724, 54484, 51426,
	48540, 45815, 43244, 40817, 38526, 36364, 34323, 32396,
	30578, 28862, 27242, 25713, 24270, 22908, 21622, 20408,
	19263, 18182, 17161, 16198, 15289, 14431, 13621, 12856,
	12135, 11454, 10811, 10204, 9631, 9091, 8581, 8099,
	7645, 7215, 6810, 6428, 6067, 5727, 5405, 5102,
	4816, 4545, 4290, 4050, 3822, 3608, 3405, 3214,
	3034, 2863, 2703, 2551, 2408, 2273, 2145, 2025,
	1911, 1804, 1703, 1607, 1517, 1432, 1351, 1276*/
};

const uint16_t gCentInterpolTable[99] = {
	65498, 65460, 65423, 65385, 65347, 65309, 65272, 65234, 
	65196, 65159, 65121, 65083, 65046, 65008, 64971, 64933,
	64896, 64858, 64821, 64783, 64746, 64708, 64671, 64634,
	64596, 64559, 64522, 64485, 64447, 64410, 64373, 64336, 
	64299, 64261, 64224, 64187, 64150, 64113, 64076, 64039, 
	64002, 63965, 63928, 63891, 63854, 63818, 63781, 63744, 
	63707, 63670, 63634, 63597, 63560, 63523, 63487, 63450, 
	63413, 63377, 63340, 63304, 63267, 63231, 63194, 63158, 
	63121, 63085, 63048, 63012, 62975, 62939, 62903, 62866, 
	62830, 62794, 62757, 62721, 62685, 62649, 62613, 62576, 
	62540, 62504, 62468, 62432, 62396, 62360, 62324, 62288, 
	62252, 62216, 62180, 62144, 62108, 62073, 62037, 62001, 
	61965, 61929, 61893
};


volatile bool gRefreshFrequency = true;
volatile uint16_t gNewCompare = 0x1000;
volatile byte gNewPrescale = 0x01;


/*! \brief These are C++ virtual handlers, not defined in avr-libc.
 
 Basic implementation will do the job.
 */
extern "C" {
    
    void __cxa_pure_virtual() 
    { 
        
        fassertfalse;
        while (1);
        
    }
    
    void __cxa_guard_acquire() 
    {  
        
    }
    
    void __cxa_guard_release() 
    { 
        
    }
    
}
