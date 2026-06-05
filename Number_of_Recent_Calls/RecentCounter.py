class RecentCounter:

    def __init__(self):
        self.recent_requests = 0

    def ping(self, t: int) -> int:
        