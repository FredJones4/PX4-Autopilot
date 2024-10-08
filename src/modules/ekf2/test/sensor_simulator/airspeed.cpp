#include "airspeed.h"

namespace sensor_simulator
{
namespace sensor
{

Airspeed::Airspeed(std::shared_ptr<Ekf> ekf): Sensor(ekf)
{
}

Airspeed::~Airspeed()
{
}

void Airspeed::send(uint64_t time)
{
	float ias2tas = 1.f;

	if (PX4_ISFINITE(_indicated_airspeed_data)
	    && (_indicated_airspeed_data > FLT_EPSILON)) {
		ias2tas = _true_airspeed_data / _indicated_airspeed_data;
	}

	airspeedSample airspeed_sample;
	airspeed_sample.time_us = time;
	airspeed_sample.eas2tas = ias2tas;
	airspeed_sample.true_airspeed = _true_airspeed_data;
	_ekf->setAirspeedData(airspeed_sample);
}

void Airspeed::setData(float true_airspeed, float indicated_airspeed)
{
	_true_airspeed_data = true_airspeed;
	_indicated_airspeed_data = indicated_airspeed;
}

} // namespace sensor
} // namespace sensor_simulator
