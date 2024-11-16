#include "Profile.h"

void Profile::init(const User& owner) {
	this->_owner = owner;
	this->_page.init();
	this->_friends.init();
}

void Profile::clear() {
	this->_friends.clear();
}

User Profile::getOwner() const {
	return this->_owner;
}

void Profile::setStatus(const std::string& new_status) {
	this->_page.setStatus(new_status);
}

void Profile::addPostToProfilePage(const std::string& post) {
	this->_page.addLineToPosts(post);
}

void Profile::addFriend(const User& friend_to_add) {
	this->_friends.add(friend_to_add);
}

std::string Profile::getPage() const {
	return "Status: " + this->_page.getStatus() + "\n*******************\n*******************\n" + this->_page.getPosts();
}

std::string Profile::getFriends() const {
	UserNode* current = this->_friends.get_first();
	std::string list = "";
	while (current != nullptr) {
		list += current->get_data().getUserName() + ",";
		current = current->get_next();
	}
	if (list != "") {
		list.pop_back();
	}
	return list;
}

std::string Profile::getFriendsWithSameNameLength() const {
	int len = this->getOwner().getUserName().length();
	UserNode* current = this->_friends.get_first();
	std::string list = "";
	while (current != nullptr) {
		if (current->get_data().getUserName().length() == len) {
			list += current->get_data().getUserName() + ",";
		}
		current = current->get_next();
	}
	if (list != "") {
		list.pop_back();
	}
	return list;
}
