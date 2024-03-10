#include "Enemy.h"

// Constructor implementation
Enemy::Enemy() : health(100) {
    // Default health for all enemies
}

// Virtual destructor to allow derived classes to clean up properly
Enemy::~Enemy() {
    // Cleanup code if necessary
}
