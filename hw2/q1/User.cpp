#include "User.h"

void User::init(const unsigned int id, const std::string username, const unsigned int age) {
	this->id = id;
	this->username = username;
	this->age = age;
	this->devices.init();
}

void User::clear() {
	devices.clear();
}

unsigned int User::getID() const {
	return id;
}

std::string User::getUserName() const {
	return username;
}

unsigned int User::getAge() const {
	return age;
}

DevicesList& User::getDevices(){
	return devices;
}

void User::addDevice(Device newDevice) {
	this->devices.add(newDevice);
}

bool User::checkIfDevicesAreOn() const {
	DeviceNode* current = devices.get_first();
	while (current != nullptr) {
		if (!current->get_data().isActive()) {
			return false;
		}
		current = current->get_next();
	}
	return true;
}