#include "GlobalOptimizationSolver.h"

#include <math.h>

GlobalOptimizationSolver::GlobalOptimizationSolver() {
	// Add initialization of func params here
}

double GlobalOptimizationSolver::solveBruteForce(double a, double b, bool isStopByEps, double eps, int iterationCount)
{
	double fx_curr, fx_opt, step = eps, x_opt = a, x_curr = a, r = 2;

	if (!isStopByEps)
	{
		step = (b - a) / iterationCount;
	}

	fx_opt = function(x_opt);
	while (x_curr < b) {
		x_curr += step;
		fx_curr = function(x_curr);

		if (fx_curr < fx_opt)
		{
			x_opt = x_curr;
			fx_opt = fx_curr;
		}
	}
	
	return x_opt;
}

double GlobalOptimizationSolver::solveStrongin(double a, double b, double r, bool isStopByEps, double eps, int iterationCount)
{
	// Add method here
	return 0;
}

double GlobalOptimizationSolver::solvePiyavsky(double a, double b, double r, bool isStopByEps, double eps, int iterationCount)
{
	// Add method here
	return 0;
}

double GlobalOptimizationSolver::function(double x)
{
	return x; // Add function here
}