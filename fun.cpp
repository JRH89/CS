//#include <iostream>
//#include <vector>
//#include <random>
//#include <chrono>
//#include <thread>
//
//struct Particle {
//    double x, y;
//    double vx, vy;
//};
//
//int main() {
//    const int numParticles = 5000;  // more particles
//    const double gravity = 0.2;
//    const double bounce = -0.7;
//    const double width = 120.0, height = 30.0;
//
//    std::vector<Particle> particles;
//    std::mt19937 rng(std::random_device{}());
//    std::uniform_real_distribution<double> distPosX(0, width);
//    std::uniform_real_distribution<double> distPosY(0, height);
//    std::uniform_real_distribution<double> distVel(-1.0, 1.0);
//
//    for (int i = 0; i < numParticles; i++) {
//        particles.push_back({ distPosX(rng), distPosY(rng), distVel(rng), distVel(rng) });
//    }
//
//    while (true) {
//        std::cout << "\033[2J\033[H"; // clear screen
//
//        for (auto& p : particles) {
//            p.vy += gravity;
//            p.x += p.vx;
//            p.y += p.vy;
//
//            if (p.x < 0 || p.x >= width) { p.vx *= bounce; p.x = std::max(0.0, std::min(p.x, width - 1)); }
//            if (p.y < 0 || p.y >= height) { p.vy *= bounce; p.y = std::max(0.0, std::min(p.y, height - 1)); }
//        }
//
//        for (int y = 0; y < (int)height; y++) {
//            for (int x = 0; x < (int)width; x++) {
//                bool drawn = false;
//                for (auto& p : particles) {
//                    if ((int)p.x == x && (int)p.y == y) {
//                        std::cout << "o";
//                        drawn = true;
//                        break;
//                    }
//                }
//                if (!drawn) std::cout << " ";
//            }
//            std::cout << "\n";
//        }
//
//        std::this_thread::sleep_for(std::chrono::milliseconds(50));
//    }
//}
