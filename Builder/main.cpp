#include <iostream>

using namespace std;

class player {
public:
    string hair;
    string clothes;
};

class playerBuilder {
public:
    virtual void buildHair() = 0;

    virtual void buildclothes() = 0;

    virtual player *getPlayer() = 0;
};

class simsPlayerBuilder : public playerBuilder {
public:
    void buildHair() override {
        player_->hair = "SIMS HAIR";

    }

    void buildclothes() override {
        player_->clothes = "SIMS CLOTHES";
    }

    player *getPlayer() override {
        return player_;
    }

private:
    player *player_ = new player;
};

class director{
public:
    director(playerBuilder* builder){
        builder_ = builder;
    }
    player* construct(){
        builder_->buildHair();
        builder_->buildclothes();
        return builder_->getPlayer();
    }
private:
    playerBuilder* builder_;
};

int main() {
director d(new simsPlayerBuilder);
player* p = d.construct();
cout<<p->hair<<endl;
cout<<p->clothes<<endl;
    return 0;
}
