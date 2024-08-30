#include <chain.hpp>
#include "models.hpp"
#include <utilities/utility.h>

namespace KDL{
    Chain Reachy_RightArm(){
        Chain reachy;

        // Convert angles to radians
        double roll_rad = 10.0 * M_PI / 180.0; // -15.0 * M_PI / 180.0;
        double pitch_rad = 0.0;
        double yaw_rad = 15.0 * M_PI / 180.0; // 10.0 * M_PI / 180.0;

        // Create the rotation matrix from RPY angles
        Rotation rpy_rotation = Rotation::RPY(roll_rad, pitch_rad, yaw_rad);

        // r_shoulder_pitch
        reachy.addSegment(Segment(Joint(Vector(0.0, -0.20, 0.0), rpy_rotation * Vector(0.0, 1.0, 0.0), Joint::RotAxis),
                                   Frame(rpy_rotation, 
                                   Vector(0.0, -0.20, 0.0))));
        // r_shoulder_roll
        reachy.addSegment(Segment(Joint(Vector(0.0, 0.0, 0.0), Vector(1.0, 0.0, 0.0), Joint::RotAxis),
                                   Frame(Rotation(1.0, 0.0, 0.0, 0.0, 1.0, 0.0 , 0.0, 0.0, 1.0), 
                                        Vector(0.0, 0.0, 0.0))));
        // r_arm_yaw
        reachy.addSegment(Segment(Joint(Vector(0.0, 0.0, -0.28), Vector(0.0, 0.0, 1.0), Joint::RotAxis),
                                   Frame(Rotation(1.0, 0.0, 0.0, 0.0, 1.0, 0.0 , 0.0, 0.0, 1.0), 
                                        Vector(0.0, 0.0, -0.28))
                                   ));
        // r_elbow_pitch
        reachy.addSegment(Segment(Joint(Vector(0.0, 0.0, 0.0), Vector(0.0, 1.0, 0.0), Joint::RotAxis),
                                   Frame(Rotation(1.0, 0.0, 0.0, 0.0, 1.0, 0.0 , 0.0, 0.0, 1.0), 
                                        Vector(0.0, 0.0, 0.0))));
        // r_forearm_yaw
        reachy.addSegment(Segment(Joint(Vector(0.0, 0.0, -0.28), Vector(0.0, 0.0, 1.0), Joint::RotAxis),
                                   Frame(Rotation(1.0, 0.0, 0.0, 0.0, 1.0, 0.0 , 0.0, 0.0, 1.0), 
                                        Vector(0.0, 0.0, -0.28))));
        // r_wrist_pitch
        reachy.addSegment(Segment(Joint(Vector(0.0, 0.0, 0.0), Vector(0.0, 1.0, 0.0), Joint::RotAxis),
                                   Frame(Rotation(1.0, 0.0, 0.0, 0.0, 1.0, 0.0 , 0.0, 0.0, 1.0), 
                                        Vector(0.0, 0.0, 0.0))));
        // r_wrist_roll
        reachy.addSegment(Segment(Joint(Vector(0.0, 0.0, 0.0), Vector(1.0, 0.0, 0.0), Joint::RotAxis),
                                   Frame(Rotation(1.0, 0.0, 0.0, 0.0, 1.0, 0.0 , 0.0, 0.0, 1.0), 
                                        Vector(0.0, 0.0, 0.0))));
        // r_gripper
        reachy.addSegment(Segment(Joint(Joint::None),
                                   Frame(Rotation(1.0, 0.0, 0.0, 0.0, 1.0, 0.0 , 0.0, 0.0, 1.0), 
                                        Vector(0.0, 0.0, -0.10))));

        return reachy;
    }

    Chain Reachy_LeftArm(){
        Chain reachy;

        // Convert angles to radians
        double roll_rad = -10.0 * M_PI / 180.0; // 15.0 * M_PI / 180.0;
        double pitch_rad = 0.0;
        double yaw_rad = -15.0 * M_PI / 180.0; // -10.0 * M_PI / 180.0;

        // Create the rotation matrix from RPY angles
        Rotation rpy_rotation = Rotation::RPY(roll_rad, pitch_rad, yaw_rad);

        // l_shoulder_pitch
        reachy.addSegment(Segment(Joint(Vector(0.0, 0.20, 0.0), rpy_rotation * Vector(0.0, 1.0, 0.0), Joint::RotAxis),
                                   Frame(rpy_rotation, 
                                   Vector(0.0, 0.20, 0.0))));
        // l_shoulder_roll
        reachy.addSegment(Segment(Joint(Vector(0.0, 0.0, 0.0), Vector(1.0, 0.0, 0.0), Joint::RotAxis),
                                   Frame(Rotation(1.0, 0.0, 0.0, 0.0, 1.0, 0.0 , 0.0, 0.0, 1.0), 
                                        Vector(0.0, 0.0, 0.0))));
        // l_arm_yaw
        reachy.addSegment(Segment(Joint(Vector(0.0, 0.0, -0.28), Vector(0.0, 0.0, 1.0), Joint::RotAxis),
                                   Frame(Rotation(1.0, 0.0, 0.0, 0.0, 1.0, 0.0 , 0.0, 0.0, 1.0), 
                                        Vector(0.0, 0.0, -0.28))
                                   ));
        // l_elbow_pitch
        reachy.addSegment(Segment(Joint(Vector(0.0, 0.0, 0.0), Vector(0.0, 1.0, 0.0), Joint::RotAxis),
                                   Frame(Rotation(1.0, 0.0, 0.0, 0.0, 1.0, 0.0 , 0.0, 0.0, 1.0), 
                                        Vector(0.0, 0.0, 0.0))));
        // l_forearm_yaw
        reachy.addSegment(Segment(Joint(Vector(0.0, 0.0, -0.28), Vector(0.0, 0.0, 1.0), Joint::RotAxis),
                                   Frame(Rotation(1.0, 0.0, 0.0, 0.0, 1.0, 0.0 , 0.0, 0.0, 1.0), 
                                        Vector(0.0, 0.0, -0.28))));
        // l_wrist_pitch
        reachy.addSegment(Segment(Joint(Vector(0.0, 0.0, 0.0), Vector(0.0, 1.0, 0.0), Joint::RotAxis),
                                   Frame(Rotation(1.0, 0.0, 0.0, 0.0, 1.0, 0.0 , 0.0, 0.0, 1.0), 
                                        Vector(0.0, 0.0, 0.0))));
        // l_wrist_roll
        reachy.addSegment(Segment(Joint(Vector(0.0, 0.0, 0.0), Vector(1.0, 0.0, 0.0), Joint::RotAxis),
                                   Frame(Rotation(1.0, 0.0, 0.0, 0.0, 1.0, 0.0 , 0.0, 0.0, 1.0), 
                                        Vector(0.0, 0.0, 0.0))));
        // l_gripper
        reachy.addSegment(Segment(Joint(Joint::None),
                                   Frame(Rotation(1.0, 0.0, 0.0, 0.0, 1.0, 0.0 , 0.0, 0.0, 1.0), 
                                        Vector(0.0, 0.0, -0.10))));

        return reachy;
    }
}
