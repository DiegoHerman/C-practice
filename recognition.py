
def cacheToFile(file_name):
    def decorator(original_func):
        global cache
        try:
            if sys.version_info[0] < 3:
                    cache = pickle.load(open(file_name, 'rb'))
            else:
                    cache = pickle.load(open(file_name, 'rb'), encoding='latin1')
        except:
            cache = None

        def new_func(*param):
            global cache
            if cache is None:
                cache = original_func(*param)
                pickle.dump(cache, open(file_name, 'wb'))
            return cache
        return new_func

    return decorator
