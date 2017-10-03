#include <pcl/ModelCoefficients.h>
#include <pcl/io/pcd_io.h>
#include <pcl/point_types.h>
#include <pcl/sample_consensus/method_types.h>
#include <pcl/sample_consensus/model_types.h>
#include <pcl/filters/passthrough.h>
#include <pcl/filters/project_inliers.h>
#include <pcl/segmentation/sac_segmentation.h>
#include <pcl/surface/concave_hull.h>
#include <pcl/filters/extract_indices.h>
#include <pcl/filters/statistical_outlier_removal.h>
#include <pcl/filters/voxel_grid.h>
#include <pcl/features/normal_3d.h>
#include <pcl/filters/model_outlier_removal.h>
#include <pcl/visualization/pcl_visualizer.h>
#include <pcl/visualization/pcl_visualizer.h>
#include <pcl/filters/model_outlier_removal.h>

#include<iostream>
#include<fstream>

int
main(int argc, char** argv)
{

	pcl::PointCloud<pcl::PointXYZRGB>::Ptr cloud(new pcl::PointCloud<pcl::PointXYZRGB>);

	pcl::PCDReader reader;
	pcl::PCDWriter writer;

	reader.read("../../../DATA/g2/g2_convexhull2.pcd", *cloud);
	std::cout << "“Ç‚Ýž‚Ý" << std::endl;
	ofstream ofs("pointXY.csv");
	for (int i = 0; i < cloud->points.size(); i++)
	{
		ofs << cloud->points[i].x << "," << cloud->points[i].y << endl;
	}

	return (0);
}