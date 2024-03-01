#ifndef USER_H
#define USER_H
#ifndef IUT_MESSANGER_USER_H
#define IUT_MESSANGER_USER_H
#include<map>
#include <iostream>
#include <functional>
#include <vector>
#include "PrivateChat.h"
#include "Channel.h"
#include "Group.h"
using namespace std;

class User {
private:
    string user_name;
    string password;
    string token;
    map<string, PrivateChat> chatslist;
    vector<Channel> channelslist;
    vector<Group> groupslist;
    int getUniqueInteger(const string& inputString) {
        hash<string> hasher;
        return hasher(inputString);
    }

public:
    User();

    User(string user_name, string password, string token) : user_name(user_name), password(password), token(token){}

    void GetProf(string user_name1, string password1, string token1);

    void create_group(string, string);

    void create_channel(string, string);

    void get_userlist();

    void get_channellist();

    void get_grouplist();

    void get_userchats(int, string);

    void get_groupchats(int, string);

    void get_channelchats(int, string);

    void join_group(string);

    void join_channel(string);

    void send_messageuser(string, string);

    void send_messasgegroup(string, string);

    void send_messagechannel(string, string);

    void create_chat(string);

};


#endif //IUT_MESSANGER_USER_H
#endif // USER_H
