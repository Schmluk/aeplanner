#include <ros/ros.h>
#include <aeplanner/aeplanner.h>

int main(int argc, char** argv)
{
  ros::init(argc, argv, "aeplanner");
  ros::console::set_logger_level(ROSCONSOLE_DEFAULT_NAME, ros::console::levels::Debug);

  ros::NodeHandle nh;
  
  aeplanner::AEPlanner aeplanner(nh);

  ros::spin();
  return 0;
}
