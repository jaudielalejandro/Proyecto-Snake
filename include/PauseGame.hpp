//=======================================================================
//Nombre: Game.hpp
//Autores : Josue Daniel Portales Rodriguez,
//          Jaudiel Alejandro Jaime Lomeli
//
//Version : Final
//Descripcion: Definicion de la clase PauseGame
//=======================================================================
#pragma once

#include <memory>

#include <SFML/Graphics/Text.hpp>

#include "State.hpp"
#include "Game.hpp"

class PauseGame : public Engine::State
{
public:
    PauseGame(std::shared_ptr<Context> &context);
    ~PauseGame();

    void Init() override;
    void ProcessInput() override;
    void Update(const sf::Time& deltaTime) override;
    void Draw() override;

private:
    std::shared_ptr<Context> m_context;
    sf::Text m_pauseTitle;
};
