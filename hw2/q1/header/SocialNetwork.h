#pragma once
#include "ProfileList.h"

class SocialNetwork
{
private:
	std::string _name;
	ProfileList _profiles;
	int _minAge;
public:
	// Initializes a social network with the given name and minimum age requirement.
	void init(const std::string& networkName, const int minAge);

	// Clears all profiles from the network.
	void clear();

	// Returns the name of the social network.
	std::string getNetworkName() const;

	// Returns the minimum age required to join the network.
	int getMinAge() const;

	// Adds a profile to the network if it meets the age requirement.
	bool addProfile(const Profile& profile_to_add);

	// Returns a formatted string of Windows devices in all profiles.
	std::string getWindowsDevices() const;

};