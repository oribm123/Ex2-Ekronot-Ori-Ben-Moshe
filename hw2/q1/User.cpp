#include "User.h"

void User::init(const unsigned int id, const std::string& username, const unsigned int age) {
	this->_id = id;
	this->_username = username;
	this->_age = age;
	this->_devices.init();
}

void User::clear() {
	this->_devices.clear();
}

unsigned int User::getID() const {
	return this->_id;
}

std::string User::getUserName() const {
	return this->_username;
}

unsigned int User::getAge() const {
	return this->_age;
}

DevicesList& User::getDevices(){
	return this->_devices;
}

void User::addDevice(Device newDevice) {
	this->_devices.add(newDevice);
}

bool User::checkIfDevicesAreOn() const {
	DeviceNode* current = this->_devices.get_first();
	while (current != nullptr) {
		if (!current->get_data().isActive()) {
			return false;
		}
		current = current->get_next();
	}
	return true;
}