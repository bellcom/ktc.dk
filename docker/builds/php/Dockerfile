ARG 5.6
FROM php:5.6-fpm
ARG 1.0.0

# Install packages.
RUN rm /etc/apt/preferences.d/no-debian-php && \
    apt-get update && apt-get install -y \
    libfreetype6-dev \
    libjpeg62-turbo-dev \
    libpng-dev \
    mysql-client \
    wget \
    curl \
    git \
    zip \
    unzip \
    libxml2-dev \
    php-soap

RUN docker-php-ext-configure gd --with-freetype-dir=/usr/include/ --with-jpeg-dir=/usr/include/
RUN docker-php-ext-install gd

# Install PHP extensions.
RUN docker-php-ext-install opcache pdo pdo_mysql soap

# Mailhog
RUN curl -fSL https://github.com/mailhog/MailHog/releases/download/v1.0.0/MailHog_linux_amd64 -o /usr/local/bin/mailhog \
    && chmod +x /usr/local/bin/mailhog

# Install Composer.
RUN wget -qO- https://getcomposer.org/installer | php -- --install-dir=/usr/local/bin --filename=composer

# Plugin for parallel composer install.
RUN composer global require hirak/prestissimo

# Drupal Console.
RUN curl https://drupalconsole.com/installer -L -o drupal.phar \
    && mv drupal.phar /usr/local/bin/drupal \
    && chmod +x /usr/local/bin/drupal
