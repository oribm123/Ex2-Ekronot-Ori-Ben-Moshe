#pragma once
#include "User.h"
#include "Page.h"
#include "UserList.h"

class Profile
{
private:
	User _owner;
	Page _page;
	UserList _friends;
public:
	// Initializes a profile with the given user as the owner.
	void init(const User& owner);

	// Clears all data in the profile, including friends and posts.
	void clear();

	// Returns the owner of the profile.
	User getOwner() const;

	// Updates the profile's status.
	void setStatus(const std::string& new_status);

	// Adds a post to the profile's page.
	void addPostToProfilePage(const std::string& post);

	// Adds a new friend to the profile's friend list.
	void addFriend(const User& friend_to_add);

	// Returns all posts and status on the profile page as a formatted string.
	std::string getPage() const;

	// Returns a comma-separated list of friends' usernames.
	std::string getFriends() const;

	// Returns a list of friends whose usernames have the same length as the owner's username.
	std::string getFriendsWithSameNameLength() const;


};