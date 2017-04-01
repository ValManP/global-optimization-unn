#pragma once

class GlobalOptimizationSolver {
public:
	GlobalOptimizationSolver(/* Add function params here*/);

	double solveBruteForce(double a, double b, bool isStopByEps, double eps, int iterationCount);
	double solveStrongin(double a, double b, double r, bool isStopByEps, double eps, int iterationCount);
	double solvePiyavsky(double a, double b, double r, bool isStopByEps, double eps, int iterationCount);

	double function(double x, double alpha, double beta, 
		       double gamma, double delta);
};
