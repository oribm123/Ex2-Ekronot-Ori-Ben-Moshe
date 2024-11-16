#include "Device.h"

void Device::init(const unsigned int id, const DeviceType type, const std::string& os) {
	this->id = id;
	this->type = type;
	this->os = os;
	this->active = true;
}

unsigned int Device::getID() const {
	return id;
}

DeviceType Device::getType() const {
	return type;
}

std::string Device::getOS() const {
	return os;
}

bool Device::isActive() const {
	return active;
}

void Device::activate() {
	active = true;
}

void Device::deactivate() {
	active = false;
}