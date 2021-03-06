from abc import ABCMeta, abstractmethod
import random
from event import SignalEvent, OrderEvent

random.seed(10)

import logger

logger_s = logger.createLogger("strategy")

class Strategy(object):
    """
    Strategy is an abstract base class providing an interface for
    users to develop their own strategies.

    The goal of a (derived) Strategy object is to generate SignalEvent
    based on the inputs of bar, and generate OrderEvent based on the
    SignalEvent and the current portifolio.

    This is designed to work both with historic and live data as
    the Strategy object is agnostic to the data source.
    """

    __metaclass__ = ABCMeta

    @abstractmethod
    def generate_signal(self, bar):
        """
        Provides the mechanism to generate a SignalEvent based on
        the data bar, this method should return None if nothing needs
        to be done for the data bar.
        """
        raise NotImplementedError("Should implement generate_signal()")


    @abstractmethod
    def generate_order(self, signal, portifolio):
        """
        Provides the mechanism to generate an OrderEvent based on
        the signal, this method should return None if nothing needs
        to be done for the signal.
        """
        raise NotImplementedError("Should implement generate_order()")

class NaiveStrategy(Strategy):
    """
    NaiveStrategy is a demonstration of how to implement your own
    Strategy.
    """
    def __init__(self, arg = None):
        """
        Your initialization goes in this method
        """
        self.arg = arg

    def generate_signal(self, bar):
        """
        if you want to generate a signal:
            construct your signal based on bar
            return a SignalEvent object
        else:
            return None
        """
        b = random.random()
        #logger_s.info("inside generate_signal, b = %f", b)
        if  b > 0.20:
            return SignalEvent('AAPL','2015','LONG', 0.50)
        else:
            return None

    def generate_order(self, signal, portifolio):
        """
        if you want to generate an order:
            construct your order based on signal and
            portifolio
            return an OrderEvent object
        else:
            return None
        """
        a = random.random()
        #logger_s.info("inside generate_order, a = %f", a)
        if a > 0.70:
            return OrderEvent('AAPL','BUY',100,'MKT',random.random())
        else:
            return None


