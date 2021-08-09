#include <iostream>
#include <list>

class YouTubeChannel {
public:
	std::string Name;
	std::string OwnerName;
	int SubscriberCount;
	std::list<std::string> PublishedVideoTitles;

	YouTubeChannel(std::string name, std::string ownerName) {
		Name = name;
		OwnerName = ownerName;
		SubscriberCount = 0;
	}

	void GetInfo() {
		std::cout << "Name: " << Name << std::endl;
		std::cout << "Ownername: " << OwnerName << std::endl;
		std::cout << "Subscribers: " << SubscriberCount << std::endl;
		std::cout << "Published Videos\n===================" << std::endl;
		for (std::string video : PublishedVideoTitles) {
			std::cout << video << std::endl;
		}
	}
};

int main()
{
	YouTubeChannel channel("dyhabo", "Dylan");
	channel.PublishedVideoTitles.push_back("Java for beginners");
	channel.PublishedVideoTitles.push_back("C++ for beginners");
	channel.PublishedVideoTitles.push_back("Java UI with Swing");

	YouTubeChannel channel2("oogers boogers", "oog boy");
	channel2.PublishedVideoTitles.push_back("Wish You Were Here - Cover");
	channel2.PublishedVideoTitles.push_back("Little Wing - Cover");

	channel.GetInfo();
	channel2.GetInfo();
	
}
