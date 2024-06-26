#include "TiKiRa.h"
#include "HUD.h"
#include "TKMath.h"

int main()
{
    TiKiRa::Engine::GetInstance().SetTick([]() {
        TiKiRa::HUD::GetInstance().DrawText("Hello, World!", 10, 10, 20, {1.0f, 1.0f, 1.0f, 1.0f});
    });
    TiKiRa::Engine::GetInstance().Run();
    return 0;
}