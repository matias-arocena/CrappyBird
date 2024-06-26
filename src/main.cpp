#include "TiKiRa.h"
#include "HUD.h"

int main()
{
    TiKiRa::Engine::GetInstance().SetTick([]() {
        TiKiRa::HUD::GetInstance().DrawText("Hello, World!", 10, 10, 20, {50, 50, 50, 255});
    });
    TiKiRa::Engine::GetInstance().Run("Crappy Bird");
    return 0;
}