# 1. Flow Control in Noisy Channels
Automatic Repeat Request protocols are protocols used to ensure flow control in noisy channels.
Before sending a frame, a node sets a timer for the frame it is about to send.
When data is sent to a node, the sending node expect a
acknowledgement if it successful and a no acknowledgement or NACK or time for acknowledgement times out if unsuccessful. If unsuccessful an ARQ request re-transmission of data.

## 1. Stop and Wait ARQ
Before a node sends a frame it sets a timer. It then sends a frame. If it successful then the receiving node sends an acknowledgement and the sender node successful receives it on time. If unsuccessful then the sending node waits until the timeout of the frame and then re-transmits the original frame after the timeout has exceeded.
The sending node will resend the frame if:
1. The timeout ends and the frame never reaches the receiving node.
2. The timeout ends and the sending node never receives the acknowledgement frame even if the frame was successfully sent.
3. The timeout ends before the sending node receives the acknowledgement packet.
## 2. Go-Back-N ARQ
N is the sender's window size.
The sender starts a timer before sending multiple frames before acknowledgement. The number of frames that can be sent depends of the window size of the receiving node.
If the sender does not receive an acknowledgement of a frame within an agreed period of time, __all frames__ of the current window are re-transmitted.

## 3. Selective Repeat ARQ
Before the sending node sends it starts a timer and then sends multiple frames.
If the receiving node does not receive a frame it sends a NACK or a timeout is reached for that frame in the sending node.
The sending node re-sends __only the frame__ that has timeout or the receiving node has sent a NACK frame for.