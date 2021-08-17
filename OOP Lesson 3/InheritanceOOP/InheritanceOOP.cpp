#include <iostream>
#include <list>

class YouTubeChannel {
private: // this access modifier only allows members of this class access to these properties
	std::string name;
	int subscriberCount;
	std::list<std::string> publishedVideoTitles;
	
protected: // this access modifier allows derived classes to access these properties
	std::string ownerName;
public:
	YouTubeChannel(std::string name, std::string ownerName) {
		this->name = name;
		this->ownerName = ownerName;
		subscriberCount = 0;
	}

	int getSubscriberCount() {
		return subscriberCount;
	}
	void subscribe() {
		subscriberCount++;
	}
	void unsubscribe() {
		if (subscriberCount > 0)
			subscriberCount--;
	}
	void publishVideo(std::string videoTitle) {
		publishedVideoTitles.push_back(videoTitle);
	}
	void getInfo() {
		std::cout << std::endl;
		std::cout << "Name: " << name << std::endl;
		std::cout << "Owner's Name: " << ownerName << std::endl;
		std::cout << "Subscribers: " << subscriberCount << std::endl;
		std::cout << "Published Videos\n===================" << std::endl;
		for (std::string video : publishedVideoTitles) {
			std::cout << video << std::endl;
		}
	}
};

// This class inherits all the public elements (methods) from YouTubeChannel
class CookingYouTubeChannel:public YouTubeChannel {
public: 
	// The constructor explicitly calls the parent constructor
	CookingYouTubeChannel(std::string name, std::string ownerName):YouTubeChannel(name, ownerName) {
	}

	void Practice() {
		std::cout << ownerName << " is practicing cooking, learning new recipes, experimenting with spices..." << std::endl;
	}

};

int main() {
	YouTubeChannel channel("dyhabo", "Dylan");
	channel.publishVideo("Java for beginners");
	channel.publishVideo("C++ for beginners");
	channel.publishVideo("Java UI with Swing");
	channel.subscribe();
	channel.unsubscribe();
	channel.subscribe();
	channel.subscribe();

	channel.getInfo();

	CookingYouTubeChannel ckChannel("Cooking Mama", "Mama");
	ckChannel.Practice();

	ckChannel.getInfo();
}