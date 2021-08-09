#include <iostream>
#include <list>

class YouTubeChannel {
private:
	std::string name;
	std::string ownerName;
	int subscriberCount;
	std::list<std::string> publishedVideoTitles;

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

int main() {
	YouTubeChannel channel("dyhabo", "Dylan");
	channel.publishVideo("Java for beginners");
	channel.publishVideo("C++ for beginners");
	channel.publishVideo("Java UI with Swing");
	channel.subscribe();
	channel.unsubscribe();
	channel.subscribe();
	channel.subscribe();

	YouTubeChannel channel2("oogers boogers", "oog boy");
	channel2.publishVideo("Wish You Were Here - Cover");
	channel2.publishVideo("Little Wing - Cover");
	channel2.subscribe();
	channel2.unsubscribe();
	channel2.subscribe();

	channel.getInfo();
	channel2.getInfo();

}