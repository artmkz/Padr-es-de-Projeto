#ifndef MEDIATOR_H
#define MEDIATOR_H

#include <iostream>
#include <string>
#include <vector>

class User;

class ChatMediator {
public:
    virtual ~ChatMediator() = default;
    virtual void sendMessage(const std::string& message, User* sender) = 0;
    virtual void addUser(User* user) = 0;
};

class ChatRoom : public ChatMediator {
    std::vector<User*> users;
    std::string roomName;

public:
    explicit ChatRoom(const std::string& name) : roomName(name) {}

    void addUser(User* user) override;

    void sendMessage(const std::string& message, User* sender) override;

    void displayUsers() const;
};

class User {
    std::string name;
    ChatMediator* mediator;

public:
    User(const std::string& userName, ChatMediator* med)
        : name(userName), mediator(med) {}

    std::string getName() const {
        return name;
    }

    void send(const std::string& message) {
        std::cout << "\n[" << name << "] enviando: \"" << message << "\"" << std::endl;
        mediator->sendMessage(message, this);
    }

    void receive(const std::string& message, const std::string& senderName) {
        std::cout << "[" << name << "] recebeu de " << senderName << ": \"" 
                  << message << "\"" << std::endl;
    }
};

inline void ChatRoom::addUser(User* user) {
    users.push_back(user);
    std::cout << "  [" << roomName << "] " << user->getName() << " entrou na sala" << std::endl;
}

inline void ChatRoom::sendMessage(const std::string& message, User* sender) {
    std::cout << "  [" << roomName << "] Mediador transmitindo para todos os usuarios..." << std::endl;
    for (User* user : users) {
        if (user != sender) {
            user->receive(message, sender->getName());
        }
    }
}

inline void ChatRoom::displayUsers() const {
    std::cout << "\n  Usuarios na sala '" << roomName << "': " << users.size() << std::endl;
    for (size_t i = 0; i < users.size(); ++i) {
        std::cout << "    " << i + 1 << ". " << users[i]->getName() << std::endl;
    }
}

#endif
