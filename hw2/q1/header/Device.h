#ifndef DEVICE_H
#define DEVICE_H
#include <string>

///////////////////////////////////////////////////////////
/*														 //
	Those definitions are used for tests,                //
	you can add your own, but please do not delete any.  //
*/														 //
enum DeviceType { PHONE, PC, LAPTOP, TABLET };		     //
//
#define UbuntuOS "UbuntuLinux"                           //						
#define RedHatOS "RedHatLinux"							 //
#define MacOS "MacOS"									 //
#define IOS "IOS"										 //
#define WINDOWS7 "Windows7"                              //
#define WINDOWS10 "Windows10"                            //
#define WINDOWS11 "Windows11"                            //
#define ANDROID "Android"                                //
														 //
/// ///////////////////////////////////////////////////////


class Device
{
private:
	unsigned int _id;
	DeviceType _type;
	std::string _os;
	bool _active;
public:
	// Initializes a device with the given ID, type, and OS. Sets it as active.
	void init(const unsigned int id, const DeviceType type, const std::string& os);

	// Returns the device's unique ID.
	unsigned int getID() const;

	// Returns the device's type (e.g., PHONE, PC).
	DeviceType getType() const;

	// Returns the device's operating system as a string.
	std::string getOS() const;

	// Checks if the device is active.
	bool isActive() const;

	// Activates the device (sets `_active` to true).
	void activate();

	// Deactivates the device (sets `_active` to false).
	void deactivate();

	
};

#endif