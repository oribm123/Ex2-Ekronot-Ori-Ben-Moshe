#pragma once
#include <string>

class Page 
{
private:
	std::string _posts;
	std::string _status;
public:
	// Initializes a page with no posts and an empty status.
	void init();

	// Returns all posts on the page as a single string.
	std::string getPosts() const;

	// Returns the current status of the page.
	std::string getStatus() const;

	// Clears all posts from the page.
	void clearPage();

	// Sets a new status for the page.
	void setStatus(const std::string& status);

	// Adds a new line to the posts on the page.
	void addLineToPosts(const std::string& new_line);


};