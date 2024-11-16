#include "SocialNetwork.h"

#define WINDOWS "Windows"
void SocialNetwork::init(const std::string& networkName, const int minAge) {
	this->_name = networkName;
	this->_profiles.init();
	this->_minAge = minAge;
}

void SocialNetwork::clear() {
	this->_profiles.clear();
}

std::string SocialNetwork::getNetworkName() const {
	return this->_name;
}

int SocialNetwork::getMinAge() const {
	return this->_minAge;
}

bool SocialNetwork::addProfile(const Profile& profile_to_add) {
	if (profile_to_add.getOwner().getAge() < this->_minAge) {
		return false;
	}
	this->_profiles.add(profile_to_add);
}

std::string SocialNetwork::getWindowsDevices() const {
	ProfileNode* current = this->_profiles.get_first();
	std::string list = "";
	while (current != nullptr) {
		DeviceNode* device = current->get_data().getOwner().getDevices().get_first();
		while (device != nullptr) {
			if (device->get_data().getOS().find(WINDOWS) != std::string::npos) {
				list += "[" + std::to_string(device->get_data().getID()) + ", " + device->get_data().getOS() + "]" + ", ";
			}
			device = device->get_next();
		}
		current = current->get_next();
	}
	if (list != "") {
		list.pop_back();
		list.pop_back();
	}
	return list;
}