#include <iostream>
#include <list>

class YouTubeChannel {
private: // this access modifier only allows members of this class access to these properties
	std::string name;
	int subscriberCount;
	std::list<std::string> publishedVideoTitles;

protected: // this access modifier allows derived classes to access these properties
	std::string ownerName;
	int contentQuality;
public:
	YouTubeChannel(std::string name, std::string ownerName) {
		this->name = name;
		this->ownerName = ownerName;
		subscriberCount = 0;
		contentQuality = 0;
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
	void checkAnalytics() {
		if (contentQuality < 5) {
			std::cout << name << " has bad quality content." << std::endl;
		}
		else
			std::cout << name << " has great quality content." << std::endl;
	}
};

// This class inherits all the public elements (methods) from YouTubeChannel
class CookingYouTubeChannel :public YouTubeChannel {
public:
	// The constructor explicitly calls the parent constructor
	CookingYouTubeChannel(std::string name, std::string ownerName) :YouTubeChannel(name, ownerName) {
	}

	void practice() {
		std::cout << ownerName << " is practicing cooking, learning new recipes, experimenting with spices..." << std::endl;
		contentQuality++;
	}

};

class SingersYouTubeChannel :public YouTubeChannel {
public:
	SingersYouTubeChannel(std::string name, std::string ownerName) :YouTubeChannel(name, ownerName) {
	}

	void practice() {
		std::cout << ownerName << " is taking singing classes, learning new songs, learning how to dance..." << std::endl;
		contentQuality++;
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
	SingersYouTubeChannel sgChannel("Voice Man Sam", "Sam");
	sgChannel.getInfo();
	ckChannel.getInfo();
	//both classes feature the same method name 'practice', however the implementation is different; hence polymorphic.
	ckChannel.practice();
	for (int i = 0; i < 7; i++) {
		sgChannel.practice();
	}

	YouTubeChannel* yt1 = &ckChannel;	// '*' indicates pointer
	YouTubeChannel* yt2 = &sgChannel;

	yt1->checkAnalytics();
	yt2->checkAnalytics();
}