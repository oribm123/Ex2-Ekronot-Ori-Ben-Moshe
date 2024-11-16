#pragma once
#include "ProfileList.h"

class SocialNetwork
{
private:
	std::string _name;
	ProfileList _profiles;
	int _minAge;
public:
	void init(const std::string& networkName, const int minAge);
	void clear();
	std::string getNetworkName() const;
	int getMinAge() const;
	bool addProfile(const Profile& profile_to_add);
	std::string getWindowsDevices() const;
};