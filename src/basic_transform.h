// maybe something here...
#include "vector_util.h"
#include <SFML/System/Vector2.hpp>

struct BasicTransform {
    // methods...

    sf::Vector2f scale;
    sf::Vector2f translation;

    sf::Vector2f applyPoint(const sf::Vector2f& p) const {
        auto res = p;
        res.x *= scale.x;
        res.y *= scale.y;
        res += translation;
        return res;
    }

    sf::Vector2f applyVector(const sf::Vector2f& p) const {
        auto res = p;
        res.x *= scale.x;
        res.y *= scale.y;
        return res;
    }

    bool operator==(const BasicTransform& other) const {
        return other.scale == scale && other.translation == translation;
    }
};
