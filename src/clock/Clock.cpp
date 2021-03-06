/*!
 *  @file       Clock.cpp
 *  Project     DEG
 *  @brief      Time keeper
 *  @author     Francois Best 
 *  @date       29/04/12
 *  @license    CC-BY-NC-SA Forty Seven Effects - 2012
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


#include "Clock.h"
#include "Globs.h"
#include "ConfFile.h"

/*==============================================================================
 Initialisation
 ==============================================================================*/

const byte Clock::mSampleTime = 4;  // Time in microseconds between two ticks.


Clock::Clock()
    : mIsRunning(false)
    , mMicrosecondsCounter(0)
    , mTimeStamp(0)
{
    
}


void Clock::configure()
{
    
    TCCR1B |= (1 << CS11) | (1 << CS10);     // Prescale: clk/64 = 250 KHz (4us)
    
}


/*==========================================================================
 Time measurement
 ==========================================================================*/

void Clock::reset()
{
    
    mMicrosecondsCounter = 0;
    
}


void Clock::start()
{
    
    mIsRunning = true;
    
}


void Clock::stop()
{
    
    mIsRunning = false;
    
    reset();
    
}


/*! \brief Get elapsed time between two calls to this method. */
uint32_t Clock::getElapsedTime(uint32_t* outCurrentTime)
{
    
    *outCurrentTime = mMicrosecondsCounter;
    
    const uint32_t result = *outCurrentTime - mTimeStamp;
    
    mTimeStamp = *outCurrentTime;
    
    return result;
    
}

