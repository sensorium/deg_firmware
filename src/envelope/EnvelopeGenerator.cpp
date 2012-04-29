/*!
 *  @file		EnvelopeGenerator.cpp
 *  Project		DEG
 *	@brief		Envelope generation algorithm
 *  @author		Francois Best 
 *	@date		29/04/12
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

#include "EnvelopeGenerator.h"



/*==============================================================================
 Construction and Destruction
 ==============================================================================*/

/*! \brief Default constructor. */
EnvelopeGenerator::EnvelopeGenerator() 
    : mCurrentState(Idle)
    , mAttackTime(0)
    , mDecayTime(0)
    , mSustainLevel(16383)
    , mReleaseTime(0)
{
	
}


/*==============================================================================
 Control
 ==============================================================================*/

void EnvelopeGenerator::gateOn()
{
    
}


void EnvelopeGenerator::gateOff()
{
    
}


/*==============================================================================
 Settings
 ==============================================================================*/

void EnvelopeGenerator::setAttack(int inValue)
{
    
}


void EnvelopeGenerator::setDecay(int inValue)
{
    
}


void EnvelopeGenerator::setSustain(int inValue)
{
    
}


void EnvelopeGenerator::setRelease(int inValue)
{
    
}
