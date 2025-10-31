class Provider:
    def __init__(self, raw="NO NAME", count_raw=0, prise_raw=0):
        self.raw = raw
        self.count_raw = count_raw
        self.prise_raw = prise_raw

    def get_Raw(self):
        return self.raw

    def get_count_raw(self):
        return self.count_raw

    def get_prise_raw(self):
        return self.prise_raw

    def set_raw(self, Raw):
        self.raw = Raw

    def set_count_raw(self, Count_Raw):
        self.count_raw = Count_Raw

    def set_Prise_raw(self, Prise_Raw):
        self.prise_raw = Prise_Raw

class ListProvider:
    def __init__(self):
        self.head = None

    def addProvider(self, p):
        new_node = {'data': p, 'next': None}
        if self.head is None:
            self.head = new_node
        else:
            current = self.head
            while current['next'] is not None:
                current = current['next']
            current['next'] = new_node

    def printList(self):
        current = self.head
        while current is not None:
            print(f"Raw: {current['data'].get_Raw()}, CountRaw: {current['data'].get_count_raw()}, PriceRaw: {current['data'].get_prise_raw()}")
            current = current['next']

class Plant:
    def __init__(self, prise=0, time=0, name_raw="NO NAME", name_plant="NO NAME"):
        self.prise = prise
        self.time = time
        self.name_raw = name_raw
        self.name_plant = name_plant

    def get_prise(self):
        return self.prise

    def get_time(self):
        return self.time

    def get_name_raw(self):
        return self.name_raw

    def get_name_plant(self):
        return self.name_plant

    def set_prise(self, Prise):
        self.prise = Prise

    def set_time(self, Time):
        self.time = Time

    def set_name_raw(self, Name_raw):
        self.name_raw = Name_raw

    def set_name_plant(self, Name_plant):
        self.name_plant = Name_plant

class Producer:
    def __init__(self, name_producer="NO NAME", name_drug="NO NAME", raw=None, name_plant=None):
        self.name_producer = name_producer
        self.name_drug = name_drug
        self.raw = raw if raw is not None else ListProvider()
        self.name_plant = name_plant if name_plant is not None else Plant()

    def get_name_producer(self):
        return self.name_producer

    def get_name_drug(self):
        return self.name_drug

    def get_raw(self):
        return self.raw

    def get_name_plant(self):
        return self.name_plant

    def set_name_producer(self, Name_produser):
        self.name_producer = Name_produser

    def set_name_drag(self, Name_drug):
        self.name_drug = Name_drug

    def set_raw(self, Raw):
        self.raw = Raw

    def set_name_plant(self, Name_plant):
        self.name_plant = Name_plant
