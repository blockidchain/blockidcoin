// Copyright (c) 2020 The BlockidCoin developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.
 
#include <amount.h>
#include <util.h>

/**
 * The number of blocks that both new and old MN collateral value will
 * be accepted, for smoother transition.
 */
const unsigned int COLLATERAL_TRANSITION_BLOCKS = 100;

/**
 * Determine the masternode collateral value based on block height
 */
CAmount CollateralRequired(int nHeight)
{
    CAmount nCollateralRequired;
    
    if (nHeight <= 500) {
        nCollateralRequired = 0 * COIN;
    } else if (nHeight <= 5000) {
        nCollateralRequired = 100 * COIN;
    } else if (nHeight <= 10000) {
        nCollateralRequired = 200 * COIN;
    } else if (nHeight <= 20000) {
        nCollateralRequired = 300 * COIN;
    } else if (nHeight <= 30000) {
        nCollateralRequired = 400 * COIN;
    } else if (nHeight <= 40000) {
        nCollateralRequired = 500 * COIN;
    } else if (nHeight <= 50000) {
        nCollateralRequired = 850 * COIN;
    } else if (nHeight <= 60000) {
        nCollateralRequired = 1000 * COIN;
    } else if (nHeight <= 70000) {
        nCollateralRequired = 1250 * COIN;
    } else if (nHeight <= 80000) {
        nCollateralRequired = 1500 * COIN;
    } else if (nHeight <= 100000) {
        nCollateralRequired = 1700 * COIN;
    } else if (nHeight <= 120000) {
        nCollateralRequired = 1900 * COIN;
    } else if (nHeight <= 140000) {
        nCollateralRequired = 2000 * COIN;
    } else if (nHeight <= 160000) {
        nCollateralRequired = 2500 * COIN;
    } else if (nHeight <= 180000) {
        nCollateralRequired = 3500 * COIN;
    } else if (nHeight <= 200000) {
        nCollateralRequired = 5000 * COIN;
    } else {
        nCollateralRequired = 8000.0001234 * COIN;
    }

    return nCollateralRequired;
}


/**
 * Provide transition period for masternode collateral change to avoid
 * unneccessary issues to masternode operators for the amount of 
 * COLLATERAL_TRANSITION_BLOCKS blocks during the collateral change.
 */
bool IsValidCollateral(CAmount nAmountToCheck, int nHeight)
{
    return (
        nAmountToCheck == CollateralRequired(nHeight) || 
        nAmountToCheck == CollateralRequired(nHeight - floor(COLLATERAL_TRANSITION_BLOCKS / 2)) ||
        nAmountToCheck == CollateralRequired(nHeight + floor(COLLATERAL_TRANSITION_BLOCKS / 2))
        );
}