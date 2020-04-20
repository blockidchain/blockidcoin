BlockidCoin Core integration/staging repository
=====================================

[![Build Status](https://travis-ci.org/BlockidCoin-Project/BlockidCoin.svg?branch=master)](https://travis-ci.org/BlockidCoin-Project/BlockidCoin) [![GitHub version](https://badge.fury.io/gh/BlockidCoin-Project%2FBlockidCoin.svg)](https://badge.fury.io/gh/BlockidCoin-Project%2FBlockidCoin)

BlockidCoin is an open source crypto-currency focused on fast private transactions using the Zerocoin protocol, with low transaction fees & environmental footprint.  It utilizes the first ever anonymous proof of stake protocol, called zPoS, combined with regular PoS and masternodes for securing its network. zPoS incentivises using the privacy features available in BlockidCoin by granting a higher block reward for zPoS over regular PoS and masternodes. In practice BlockidCoin has between 4 to 10 times higher use of it's privacy features in comparison to other coins that combine public and private transactions. This is thanks to innovations like zPoS and integrating the Zerocoin protocol into light/mobile wallets, allowing for a complete and lightweight privacy protocol that can be used on the go. As well as security improvements like [deterministic generation of zBID for easy backups.](https://www.reddit.com/r/blockidcoin/comments/8gbjf7/how_to_use_deterministic_zerocoin_generation/)
The goal of BlockidCoin is to achieve a decentralized sustainable crypto currency with near instant full-time private transactions, fair governance and community intelligence.
- Anonymized transactions & consensus using the [_Zerocoin Protocol_](http://www.blockidcoin.org/zpiv) and [zPoS](https://blockidcoin.org/zpos/).
- light/mobile wallet privacy using the [Zerocoin Light Node Protocol](https://blockidcoin.org/wp-content/uploads/2018/11/Zerocoin_Light_Node_Protocol.pdf)
- Fast transactions featuring guaranteed zero confirmation transactions, we call it _SwiftX_.
- Decentralized blockchain voting utilizing Masternode technology to form a DAO. The blockchain will distribute monthly treasury funds based on successful proposals submitted by the community and voted on by the DAO.

More information at [blockidcoin.com](http://blockidcoin.com) Visit our ANN thread at [BitcoinTalk](https://bitcointalk.org/index.php?topic=5240272.msg54216593) Join our community on [Discord](https://discord.gg/KqXhTRB)

### Coin Specs
<table>
<tr><td>Algo</td><td>Quark</td></tr>
<tr><td>Block Time</td><td>60 Seconds</td></tr>
<tr><td>Difficulty Retargeting</td><td>Every Block</td></tr>
<tr><td>Max Coin Supply (PoW Phase)</td><td>60,000,000 BID</td></tr>
<tr><td>Max Coin Supply (PoS Phase)</td><td>Infinite</td></tr>
<tr><td>Premine</td><td>360,000 BID*</td></tr>
</table>

*360,000 BID Premine 

### Reward Distribution

<table>
<th colspan=4>Genesis Block</th>
<tr><th>Block Height</th><th>Reward Amount</th><th>Notes</th></tr>
<tr><td>1</td><td>360,000 BID</td><td>Initial Pre-mine

### PoW Rewards Breakdown

<table>
<th>Block Height</th><th>Masternodes</th><th>Miner</th><th>Budget</th>
<tr><td>0-500</td><td>0% (0 BID)</td><td>100% (1 BID)</td><td>N/A</td></tr>
</table>

### PoS Rewards Breakdown

<table>
<th>Phase</th><th>Block Height</th><th>Reward</th><th>Masternodes</th><th>Stakers</th><th>MN Collateral</th>
<tr><td>Phase 2</td><td>501-5000</td><td>0.5 BID</td><td>0.495 BID</td><td>0.005 BID</td><td>100 BID</td></tr>
<tr><td>Phase 3</td><td>5001-10000</td><td>1 BID</td><td>0.995 BID</td><td>0.005 BID</td><td>200 BID</td></tr>
<tr><td>Phase 4</td><td>10001-20000</td><td>1.5 BID</td><td>1.495 BID</td><td>0.005 BID</td><td>300 BID</td></tr>
<tr><td>Phase 5</td><td>20001-30000</td><td>2 BID</td><td>1.995 BID</td><td>0.005 BID</td><td>400 BID</td></tr>
<tr><td>Phase 6</td><td>30001-40000</td><td>2.5 BID</td><td>2.495 BID</td><td>0.005 BID</td><td>500 BID</td></tr>
<tr><td>Phase 7</td><td>40001-50000</td><td>4 BID</td><td>3.995 BID</td><td>0.005 BID</td><td>850 BID</td></tr>
<tr><td>Phase 8</td><td>50001-60000</td><td>4.5 BID</td><td>4.995 BID</td><td>0.005 BID</td><td>1000 BID</td></tr>
<tr><td>Phase 9</td><td>60001-70000</td><td>7 BID</td><td>6.995 BID</td><td>0.005 BID</td><td>1250 BID</td></tr>
<tr><td>Phase 10</td><td>70001-80000</td><td>8.5 BID</td><td>8.495 BID</td><td>0.005 BID</td><td>1500 BID</td></tr>
<tr><td>Phase 11</td><td>80001-90000</td><td>9.5 BID</td><td>9.495 BID</td><td>0.005 BID</td><td>1700 BID</td></tr>
<tr><td>Phase 12</td><td>90001-100000</td><td>10.5 BID</td><td>10.495 BID</td><td>0.005 BID</td><td>1900 BID</td></tr>
<tr><td>Phase 13</td><td>100001-110000</td><td>11.5 BID</td><td>11.495 BID</td><td>0.005 BID</td><td>2000 BID</td></tr>
<tr><td>Phase 14</td><td>110001-120000</td><td>13 BID</td><td>12.995 BID</td><td>0.005 BID</td><td>2500 BID</td></tr>
<tr><td>Phase 15</td><td>120001-130000</td><td>15 BID</td><td>14.995 BID</td><td>0.005 BID</td><td>4500 BID</td></tr>
<tr><td>Phase 16</td><td>130001-Collateral Lock</td><td>20 BID</td><td>19.995 BID</td><td>0.005 BID</td><td>7000 BID</td></tr>
</table>
