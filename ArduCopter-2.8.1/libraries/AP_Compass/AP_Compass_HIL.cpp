/*
 *       AP_Compass_HIL.cpp - Arduino Library for HIL model of HMC5843 I2C Magnetometer
 *       Code by James Goppert. DIYDrones.com
 *
 *       This library is free software; you can redistribute it and / or
 *               modify it under the terms of the GNU Lesser General Public
 *               License as published by the Free Software Foundation; either
 *               version 2.1 of the License, or (at your option) any later version.
 */


#include "AP_Compass_HIL.h"

// Public Methods //////////////////////////////////////////////////////////////

bool AP_Compass_HIL::read()
{
    // values set by setHIL function
    last_update = micros();      // record time of update
    return true;
}

// Update raw magnetometer values from HIL data
//
void AP_Compass_HIL::setHIL(float _mag_x, float _mag_y, float _mag_z)
{
    Vector3f ofs = _offset.get();
    mag_x = 1;//_mag_x + ofs.x;
    mag_y = 1;//_mag_y + ofs.y;
    mag_z = 1;//_mag_z + ofs.z;
    healthy = true;
}

void AP_Compass_HIL::accumulate(void)
{
	// nothing to do
}
